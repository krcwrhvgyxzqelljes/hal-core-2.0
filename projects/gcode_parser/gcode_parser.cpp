#include "gcode_parser.h"
#include <iostream>
#include <sstream>
#include <string>
#include <iomanip> // For std::fixed and std::setprecision

gcode_parser::gcode_parser(){ }

// Function to split a token like "G64" into a pair ('G', 64)
std::pair<char, double> gcode_parser::split_token(const std::string& token) {
    char letter = token[0];
    double value = std::stod(token.substr(1));
    return std::make_pair(letter, value);
}

void gcode_parser::tokenize(const std::string &file, std::vector<gcode_line> &gvec){

    const std::string& gcode=std_functions().read_file_to_string(file);

    // Tokenize the gcode file into a token : G64, N1, etc, or a comment : (comment).
    std::istringstream iss(gcode);
    std::string line;
    while (std::getline(iss, line)) {

        // Process line by line.
        // std::cout << "Line: " << line << std::endl;
        std::istringstream lineStream(line);
        std::string token;
        std::string comment;
        bool inComment = false;

        gcode_line gl;

        while (lineStream >> token) { // Process tokens in a line, filter out comments.

            if (token.front() == '(' && token.back() == ')') {
                comment+=token;
                std::cout << "Comment: " << comment << std::endl;
                gl.comment=comment;
            } else if (token.front() == '(') {
                inComment = true;
                comment = token;
            } else if (inComment) {
                comment += " " + token;
                if (token.back() == ')') {
                    inComment = false;
                    std::cout << "Comment: " << comment << std::endl;
                    gl.comment=comment;
                }
            } else {
                std::cout << "Token: " << token << std::endl;

                if (isalpha(token[0])) {
                    std::pair<char, double> split = split_token(token);
                    std::cout << "Token id: " << split.first << " value:" << split.second << std::endl;


                    if(split.first=='A'){
                        gl.a=split.second;
                    }
                    if(split.first=='B'){
                        gl.b=split.second;
                    }
                    if(split.first=='C'){
                        gl.c=split.second;
                    }
                    if(split.first=='D'){
                        gl.d=split.second;
                    }
                    if(split.first=='E'){
                        gl.e=split.second;
                    }
                    if(split.first=='F'){
                        gl.f=split.second;
                    }
                    if(split.first=='G'){
                        gl.g_nrs.push_back(split); // vector of G
                    }
                    if(split.first=='H'){
                        gl.h=split.second;
                    }
                    if(split.first=='I'){
                        gl.i=split.second;
                    }
                    if(split.first=='J'){
                        gl.j=split.second;
                    }
                    if(split.first=='K'){
                        gl.k=split.second;
                    }
                    if(split.first=='L'){
                        gl.l=split.second;
                    }
                    if(split.first=='M'){
                        gl.m_nrs.push_back(split); // vector of M
                    }
                    if(split.first=='N'){
                        gl.n=split.second;
                    }
                    if(split.first=='O'){
                        gl.o=split.second;
                    }
                    if(split.first=='P'){
                        gl.p=split.second;
                    }
                    if(split.first=='Q'){
                        gl.q=split.second;
                    }
                    if(split.first=='R'){
                        gl.r=split.second;
                    }
                    if(split.first=='S'){
                        gl.s=split.second;
                    }
                    if(split.first=='T'){
                        gl.t=split.second;
                    }
                    if(split.first=='U'){
                        gl.u=split.second;
                    }
                    if(split.first=='V'){
                        gl.v=split.second;
                    }
                    if(split.first=='W'){
                        gl.w=split.second;
                    }
                    if(split.first=='X'){
                        gl.x=split.second;
                    }
                    if(split.first=='Y'){
                        gl.y=split.second;
                    }
                    if(split.first=='Z'){
                        gl.z=split.second;
                    }
                }
            }
        }
        gvec.push_back(gl);
    }
}

// Function to print a single gcode_line object
void gcode_parser::print_line(const gcode_line& line) {
    std::cout << "N: " << line.n << "\n"
              << "A: " << std::fixed << std::setprecision(3) << line.a << "\n"
              << "B: " << std::fixed << std::setprecision(3) << line.b << "\n"
              << "C: " << std::fixed << std::setprecision(3) << line.c << "\n"
              << "D: " << std::fixed << std::setprecision(3) << line.d << "\n"
              << "E: " << std::fixed << std::setprecision(3) << line.e << "\n"
              << "F: " << std::fixed << std::setprecision(3) << line.f << "\n"
              << "H: " << std::fixed << std::setprecision(3) << line.h << "\n"
              << "I: " << std::fixed << std::setprecision(3) << line.i << "\n"
              << "J: " << std::fixed << std::setprecision(3) << line.j << "\n"
              << "K: " << std::fixed << std::setprecision(3) << line.k << "\n"
              << "L: " << std::fixed << std::setprecision(3) << line.l << "\n"
              << "M: " << std::fixed << std::setprecision(3) << line.m << "\n"
              << "O: " << std::fixed << std::setprecision(3) << line.o << "\n"
              << "P: " << std::fixed << std::setprecision(3) << line.p << "\n"
              << "Q: " << std::fixed << std::setprecision(3) << line.q << "\n"
              << "R: " << std::fixed << std::setprecision(3) << line.r << "\n"
              << "S: " << std::fixed << std::setprecision(3) << line.s << "\n"
              << "T: " << std::fixed << std::setprecision(3) << line.t << "\n"
              << "U: " << std::fixed << std::setprecision(3) << line.u << "\n"
              << "V: " << std::fixed << std::setprecision(3) << line.v << "\n"
              << "W: " << std::fixed << std::setprecision(3) << line.w << "\n"
              << "X: " << std::fixed << std::setprecision(3) << line.x << "\n"
              << "Y: " << std::fixed << std::setprecision(3) << line.y << "\n"
              << "Z: " << std::fixed << std::setprecision(3) << line.z << "\n"
              << "G codes: ";
    for (const auto& g : line.g_nrs) {
        std::cout << g.first << std::fixed << std::setprecision(3) << g.second << " ";
    }
    std::cout << "\nM codes: ";
    for (const auto& m : line.m_nrs) {
        std::cout << m.first << std::fixed << std::setprecision(3) << m.second << " ";
    }
    std::cout << "\nComment: " << line.comment << "\n";
}

void gcode_parser::parse(const std::string &file, std::vector<gcode_line> &gvec, int debug){
    tokenize(file, gvec);

    if(debug){
        for (const auto& line : gvec) {
                print_line(line);
                std::cout << "---------------------------------\n";
            }
    }
}






















