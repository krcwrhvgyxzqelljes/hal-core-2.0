#ifndef STD_FUNCTIONS_H
#define STD_FUNCTIONS_H

#include <string>
#include <vector>

class std_functions
{
public:
    std_functions();

    std::vector<std::pair<std::string, double>> parse_string_to_key_and_value(const std::string& input, int debug);
    std::string remove_spaces(const std::string& input);
    std::string remove_spaces_and_newlines(const std::string& input);
    std::string string_to_lower(const std::string& input);
    std::string read_file_to_string(const std::string& filepath);
    void save_string_to_file(const std::string& content, const std::string& filepath);
    std::string remove_first_newline(const std::string& str);
    int digits(double value);
};

#endif // STD_FUNCTIONS_H
