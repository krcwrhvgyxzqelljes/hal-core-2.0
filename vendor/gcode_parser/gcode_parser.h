#ifndef GCODE_PARSER_H
#define GCODE_PARSER_H

#include <vector>
#include "std_functions.h"
#include "gp_Pnt.hxx"
#include "AIS_Shape.hxx"

class gcode_line {
public:
    double a = 0.0;
    double b = 0.0;
    double c = 0.0;
    double d = 0.0;
    double e = 0.0;
    double f = 0.0;
    double g = 0.0;
    double h = 0.0;
    double i = 0.0;
    double j = 0.0;
    double k = 0.0;
    double l = 0.0;
    double m = 0.0;
    double n = 0.0;
    double o = 0.0;
    double p = 0.0;
    double r = 0.0;
    double s = 0.0;
    double t = 0.0;
    double u = 0.0;
    double v = 0.0;
    double w = 0.0;
    double x = 0.0;
    double y = 0.0;
    double z = 0.0;
    double g64_p = 0.0;
    double g64_q = 0.0;
    std::string comment = "";
};

typedef gp_Pnt gp_Abc;
typedef gp_Pnt gp_Uvw;

struct shape {
    int g_id=0;                 // Line, arc, rapic, general.
    int e_id;                   // G9 identifyer for line, arc, clothoid, etc.
    gp_Pnt p0={0,0,0},pw,p1;    // Start, way, end point.
    gp_Pnt pc,pn;               // Center, Point on normal axis.
    std::vector<gp_Pnt> pwvec;  // Vector of waypoints for splines.
    double radius;
    double lenght;              // Lenght of this shape.
    double lenght_end;          // Trajtectory end lenght of this shape in the vector.
    double theta0, theta1;
    double curva0, curva1;
    double turns;               // Spiral, helix nr of turns. Input integer.
    double g2_continuity;       // Spiral, helix g2 continuity model. 1=on.
    std::vector<int> line_nrs;  // Gcode line nrs for this shape.

    gp_Abc abc;
    gp_Uvw uvw;

    double feed;
    double spindle_speed;
    int tool_nr;

    Handle(AIS_Shape) aShape;
};

struct gcode_shapes {



};

class gcode_parser
{
public:
    gcode_parser();

    std::pair<std::string, double> split_token(std::string token);
    gcode_line process_token(const std::string &token, gcode_line gc, bool &inComment, std::string &comment);
    void tokenize(const std::string& filename, std::vector<gcode_line> &gvec, int debug);
    void tokens_to_shapes(const std::vector<gcode_line> &gvec, std::vector<shape> &svec);

private:
};

#endif // GCODE_PARSER_H
