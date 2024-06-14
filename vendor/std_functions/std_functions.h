#ifndef STD_FUNCTIONS_H
#define STD_FUNCTIONS_H

#include <string>

class std_functions
{
public:
    std_functions();

    std::string read_file_to_string(const std::string& filepath);
    void save_string_to_file(const std::string& content, const std::string& filepath);
    std::string remove_first_newline(const std::string& str);
};

#endif // STD_FUNCTIONS_H
