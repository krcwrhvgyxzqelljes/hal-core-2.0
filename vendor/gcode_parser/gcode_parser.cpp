#include "gcode_parser.h"
#include <iostream>
#include <sstream>
#include <string>
#include <iomanip> // For std::fixed and std::setprecision
#include "draw_primitives.h"

gcode_parser::gcode_parser(){ }

// Function to split a token like "G64" into a pair ('G', 64)
std::pair<std::string, double> gcode_parser::split_token(std::string token) {
    std::string letter(1, token[0]);  // Create a string with the first character
    double value = std::stod(token.substr(1));
    return std::make_pair(letter, value);
}

void gcode_parser::tokenize(const std::string &filename, std::vector<gcode_line> &gvec, int debug) {
    gvec.clear();  // Clear the vector to ensure it's empty before starting

    std::string gcode = std_functions().read_file_to_string(filename);
    gcode = std_functions().string_to_lower(gcode);
    gcode = std_functions().remove_spaces(gcode);

    std::vector<std::pair<std::string, double>> pairvec = std_functions().parse_string_to_key_and_value(gcode, 1);

    gcode_line gc;
    for(auto pair:pairvec){

        if(pair.first=="newline"){
            gvec.push_back(gc);
            gc.i=0;
            gc.j=0;
            gc.k=0;
        }
        if(pair.first=="n"){
            gc.n=pair.second;
        }
        if(pair.first=="g"){
            gc.g=pair.second;
        }
        if(pair.first=="x"){
            gc.x=pair.second;
        }
        if(pair.first=="y"){
            gc.y=pair.second;
        }
        if(pair.first=="z"){
            gc.z=pair.second;
        }

        if(pair.first=="i"){
            gc.i=pair.second;
        }
        if(pair.first=="j"){
            gc.j=pair.second;
        }
        if(pair.first=="k"){
            gc.k=pair.second;
        }
    }
    gvec.push_back(gc);

    if(debug){
        for(auto line:gvec){
            std::cout<<"n:"<<line.n<<" g:"<<line.g<<"x: "<<line.x<<" y:"<<line.y<<" z:"<<line.z<<" i:"<<line.i<<" j:"<<line.j<<" k:"<<line.k<<std::endl;
        }
    }
}


void gcode_parser::tokens_to_shapes(const std::vector<gcode_line> &gvec, std::vector<shape> &svec){

    gp_Pnt p={0,0,0};
    gp_Abc abc={0,0,0};
    gp_Uvw uvw={0,0,0};

    shape sha;

#define mm_to_inch 0.03937008;
#define inch_to_mm 25.4;
    int plane=0;
    int to_inches=0;

    for(auto g:gvec){

        if(g.g==20){ // G20 - to use inches for length units.
            to_inches=1;
        }
        if(g.g==21){ // G21 - to use millimeters for length units.
            to_inches=0;
        }

        if(g.g==17){ // G17 (Z-axis, XY-plane)
            plane=0;
        }
        if(g.g==18){ // G18 (Y-axis, XZ-plane)
            plane=1;
        }
        if(g.g==19){ // G19 (X-axis, YZ-plane)
            plane=2;
        }

        if(to_inches){
            g.x=g.x*inch_to_mm;
            g.y=g.y*inch_to_mm;
            g.z=g.z*inch_to_mm;
            g.a=g.a*inch_to_mm;
            g.b=g.b*inch_to_mm;
            g.c=g.c*inch_to_mm;
            g.u=g.u*inch_to_mm;
            g.v=g.v*inch_to_mm;
            g.w=g.w*inch_to_mm;
            g.i=g.i*inch_to_mm;
            g.j=g.j*inch_to_mm;
            g.k=g.k*inch_to_mm;
        }


        if(g.g==0 || g.g==1 || g.g==2 || g.g==3 || g.g==9){ // New shape found.
            svec.push_back(sha);
            svec.back().g_id=g.g;
        }
        if(g.e>0){
            svec.back().e_id=g.e;
        }

        // Line G0, G1.
        if(svec.back().g_id==0 || svec.back().g_id==1){
            svec.back().p0=p;
            svec.back().p1={g.x,g.y,g.z};
            svec.back().lenght=svec.back().p0.Distance(svec.back().p1);

            svec.back().abc={g.a,g.b,g.c};
            svec.back().uvw={g.u,g.v,g.w};
        }
        if(svec.back().g_id==0){
            svec.back().feed=INFINITY;
            svec.back().aShape=draw_primitives::colorize( draw_primitives::draw_3d_line(svec.back().p0,svec.back().p1),Quantity_NOC_GRAY15,0);
        }
        if(svec.back().g_id==1){
            svec.back().feed=g.f;
            svec.back().aShape=draw_primitives::colorize( draw_primitives::draw_3d_line(svec.back().p0,svec.back().p1),Quantity_NOC_GRAY50,0);
        }

        // Arc G2 // G17 (Z-axis, XY-plane)
        if(svec.back().g_id==2 && plane==0){
            svec.back().p0=p;
            svec.back().pc={p.X()+g.i, p.Y()+g.j, p.Z()}; // I & J are offsets to center seen from arc startpoint.
            svec.back().p1={g.x,g.y,g.z};
            if(svec.back().p0.Distance(svec.back().p1)>0){
                // std::cout<<"center x:"<< svec.back().pc.X()<<" y:"<<svec.back().pc.Y()<<" z:"<<svec.back().pc.Z()<<std::endl;
                svec.back().aShape=draw_primitives::colorize( draw_primitives::draw_3d_pc_arc(svec.back().p1,svec.back().p0,svec.back().pc,0,0,1,svec.back().pw),Quantity_NOC_GRAY50,0) ;

                //draw_primitives::draw_3d_pc_arc(svec.back().p1,svec.back().p0,svec.back().pc,0,0,1,svec.back().pw);
                //svec.back().aShape=draw_primitives::colorize( draw_primitives::draw_3p_3d_arc(svec.back().p0, svec.back().pw, svec.back().p1),Quantity_NOC_GRAY50,0) ;

            } else {
                // svec.back().aShape=draw_primitives::colorize( draw_primitives::draw_3d_pc_circle(svec.back().pc,0,0,1,svec.back().p1.Distance(svec.back().pc)),Quantity_NOC_GRAY50,0);
            }
            svec.back().lenght=draw_primitives::get_3d_arc_lenght(svec.back().p0,svec.back().pw,svec.back().p1);
        }
//        // Arc G2 // G18 (Y-axis, XZ-plane)
//        if(svec.back().g_id==2 && plane==1){
//            svec.back().p0=p;
//            svec.back().pc={p.X()+g.i, p.Z(), p.Y()+g.k};
//            svec.back().p1={g.x, g.z, g.y};
//            if(svec.back().p0.Distance(svec.back().p1)>0){
//                svec.back().aShape=draw_primitives::colorize( draw_primitives::draw_3d_pc_arc(svec.back().p1,svec.back().p0,svec.back().pc,0,1,0,svec.back().pw),Quantity_NOC_GRAY50,0);
//            } else {
//                svec.back().aShape=draw_primitives::colorize( draw_primitives::draw_3d_pc_circle(svec.back().pc,0,1,0,svec.back().p1.Distance(svec.back().pc)),Quantity_NOC_GRAY50,0);
//            }
//            svec.back().lenght=draw_primitives::get_3d_arc_lenght(svec.back().p0,svec.back().pw,svec.back().p1);
//        }
//        // Arc G2 // G19 (X-axis, YZ-plane)
//        if(svec.back().g_id==2 && plane==2){
//            svec.back().p0=p;
//            svec.back().pc={g.z, p.X()+g.x, p.Y()+g.y};
//            svec.back().p1={g.z, g.x, g.y};
//            if(svec.back().p0.Distance(svec.back().p1)>0){
//                svec.back().aShape=draw_primitives::colorize( draw_primitives::draw_3d_pc_arc(svec.back().p1,svec.back().p0,svec.back().pc,1,0,0,svec.back().pw),Quantity_NOC_GRAY50,0);
//            } else {
//                svec.back().aShape=draw_primitives::colorize( draw_primitives::draw_3d_pc_circle(svec.back().pc,1,0,0,svec.back().p1.Distance(svec.back().pc)),Quantity_NOC_GRAY50,0);
//            }
//            svec.back().lenght=draw_primitives::get_3d_arc_lenght(svec.back().p0,svec.back().pw,svec.back().p1);
//        }

        // Arc G3 // G17 (Z-axis, XY-plane)
        if(svec.back().g_id==3 && plane==0){
            svec.back().p0=p;
            svec.back().pc={p.X()+g.i, p.Y()+g.j, p.Z()}; // I & J are offsets to center seen from arc startpoint.
            svec.back().p1={g.x, g.y, g.z};
            if(svec.back().p0.Distance(svec.back().p1)>0){
                 svec.back().aShape=draw_primitives::colorize( draw_primitives::draw_3d_pc_arc(svec.back().p0,svec.back().p1,svec.back().pc,0,0,1,svec.back().pw),Quantity_NOC_GRAY50,0) ;

                //draw_primitives::draw_3d_pc_arc(svec.back().p0,svec.back().p1,svec.back().pc,0,0,1,svec.back().pw);
                //svec.back().aShape=draw_primitives::colorize( draw_primitives::draw_3p_3d_arc(svec.back().p0, svec.back().pw, svec.back().p1),Quantity_NOC_GRAY50,0) ;
            } else {
                svec.back().aShape=draw_primitives::colorize( draw_primitives::draw_3d_pc_circle(svec.back().pc,0,0,1,svec.back().p1.Distance(svec.back().pc)),Quantity_NOC_GRAY50,0);
            }
            svec.back().lenght=draw_primitives::get_3d_arc_lenght(svec.back().p1,svec.back().pw,svec.back().p0);
        }
        // Arc G3 // G18 (Y-axis, XZ-plane)
//        if(svec.back().g_id==3 && plane==1){
//            svec.back().p0=p;
//            svec.back().pc={p.X()+g.i, p.Z(), p.Y()+g.k};
//            svec.back().p1={g.x, g.z, g.y};
//            if(svec.back().p0.Distance(svec.back().p1)>0){
//                svec.back().aShape=draw_primitives::colorize( draw_primitives::draw_3d_pc_arc(svec.back().p0,svec.back().p1,svec.back().pc,0,1,0,svec.back().pw),Quantity_NOC_GRAY50,0);
//            } else {
//                svec.back().aShape=draw_primitives::colorize( draw_primitives::draw_3d_pc_circle(svec.back().pc,0,1,0,svec.back().p1.Distance(svec.back().pc)),Quantity_NOC_GRAY50,0);
//            }
//            svec.back().lenght=draw_primitives::get_3d_arc_lenght(svec.back().p1,svec.back().pw,svec.back().p0);
//        }
//        // Arc G3 // G19 (X-axis, YZ-plane)
//        if(svec.back().g_id==3 && plane==2){
//            svec.back().p0=p;
//            svec.back().pc={g.z, p.X()+g.x, p.Y()+g.y};
//            svec.back().p1={g.z, g.x, g.y};
//            if(svec.back().p0.Distance(svec.back().p1)>0){
//                svec.back().aShape=draw_primitives::colorize( draw_primitives::draw_3d_pc_arc(svec.back().p0,svec.back().p1,svec.back().pc,1,0,0,svec.back().pw),Quantity_NOC_GRAY50,0);
//            } else {
//                svec.back().aShape=draw_primitives::colorize( draw_primitives::draw_3d_pc_circle(svec.back().pc,1,0,0,svec.back().p1.Distance(svec.back().pc)),Quantity_NOC_GRAY50,0);
//            }
//            svec.back().lenght=draw_primitives::get_3d_arc_lenght(svec.back().p1,svec.back().pw,svec.back().p0);
//        }
        p=svec.back().p1;
    }
}






















