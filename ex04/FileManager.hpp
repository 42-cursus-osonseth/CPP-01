#ifndef FILE_MANAGER_HPP
#define FILE_MANAGER_HPP

#include <string>
#include <fstream>
#include <stdexcept>
#include <iostream>

class FileManager
{
private:
    std::string _file_name;
    std::string _new_file_name;
    std::string _line;
    std::string _s1;
    std::string _s2;
    std::fstream _input_file;
    std::fstream _output_file;
    void open_files();
    void close_files();
    void process_line(std::string &line);
    void handle_err(const std::string &str) const;

public:
    FileManager(char **argv);
    ~FileManager();
    static void check_args(int argc, char **argv);
    void process_file();
};

#endif