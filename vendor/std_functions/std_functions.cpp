#include "std_functions.h"
#include <fstream>
#include <string>
#include <iostream>

std_functions::std_functions()
{

}

// Function to read text from a file into a string
std::string std_functions::read_file_to_string(const std::string& filepath) {
    std::ifstream file(filepath);
    if (!file.is_open()) {
        std::cerr << "Error: Could not open file " << filepath << std::endl;
        return ""; // Return an empty string if file cannot be opened
    }

    // Read the contents of the file into a string
    std::string content((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());

    // Close the file
    file.close();

    return content;
}

// Function to save a string to a file, it overwrites the file.
void std_functions::save_string_to_file(const std::string& content, const std::string& filepath) {
    std::ofstream file(filepath);
    if (!file.is_open()) {
        std::cerr << "Error: Could not create file " << filepath << std::endl;
        return;
    }

    // Write the content to the file
    file << content;

    // Close the file
    file.close();

    // std::cout << "File saved successfully: " << filepath << std::endl;
}

// Function to remove the first newline character (\n) from the beginning of a string
std::string std_functions::remove_first_newline(const std::string& str) {
    if (!str.empty() && str[0] == '\n') {
        return str.substr(1); // Return substring starting from index 1 (skipping the first \n)
    }
    return str; // Return original string if it doesn't start with \n
}
