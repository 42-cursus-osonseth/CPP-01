#include <string>
#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
    if (argc != 4 || !argv[1] || !argv[2] || !argv[3])
        return std::cout << "Bad number of arguments" << std::endl, 1;
    //--------------------------------------------------------------------------
    std::string file_name = argv[1];
    std::string new_file_name = file_name + ".replace";
    std::string line;
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    //--------------------------------------------------------------------------
    std::fstream input_file;
    std::fstream output_file;
    //--------------------------------------------------------------------------
    input_file.open(file_name.c_str(), std::ios::in);
    if (!input_file.is_open())
        return std::cout << "Error: file doesn't exist or can't be open" << std::endl, 1;
    output_file.open(new_file_name.c_str(), std::ios::out);
    if (!output_file.is_open())
        return std::cout << "Error: file can't be open" << std::endl, 1;

    while (std::getline(input_file, line))
    {
        size_t pos = 0;
        while ((pos = line.find(s1, pos)) != std::string::npos)
        {
            line = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
            pos += s2.length();
        }
        output_file << line << std::endl;
    }
    input_file.close();
    output_file.close();

    return 0;
}