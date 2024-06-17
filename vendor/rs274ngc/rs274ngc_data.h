#ifndef RS274NGC_DATA_H
#define RS274NGC_DATA_H

#include "gp_Pnt.hxx"

struct rs274ngc_data {
    int type;           // G0,G1,G2,G3,G9
    gp_Pnt p0,p1;       // Line start, end = p0 to p1.
    gp_Pnt pc;          // Arc center, relative to startpoint? z=p1.z
    gp_Pnt pw;          // Arc waypoint, line waypoint.
    gp_Pnt abc0, abc1, uvw0, uvw1;
    double feed;
    int line_nr;
    int plane;
};

#endif // RS274NGC_DATA_H
