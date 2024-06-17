#ifndef RS274NGC_INTF_H
#define RS274NGC_INTF_H

#include <string>

class rs274ngc_intf
{
public:
    rs274ngc_intf();

    int load_file(std::string file_in, std::string file_out);
};

#endif // RS274NGC_INTF_H
