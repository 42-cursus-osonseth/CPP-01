#include "FileManager.hpp"

FileManager::FileManager(char **argv) : _file_name(argv[1]), _new_file_name(_file_name + ".replace"), _line(""), _s1(argv[2]), _s2(argv[3])
{
    open_files();
}

FileManager::~FileManager()
{
    close_files();
}
void FileManager::handle_err(const std::string &str) const
{
    throw std::runtime_error(str);
}
void FileManager::check_args(int argc, char **argv)
{
    if (argc != 4 || !argv[1] || !argv[2] || !argv[3])
        throw std::runtime_error("Bad number of arguments");
}
void FileManager::process_file()
{
    while (std::getline(_input_file, _line))
    {
        process_line(_line);
        _output_file << _line << std::endl;
    }
}

void FileManager::process_line(std::string &_line)
{
    if (_s1.empty())
        return;
    size_t pos = 0;
    while ((pos = _line.find(_s1, pos)) != std::string::npos)
    {
        _line = _line.substr(0, pos) + _s2 + _line.substr(pos + _s1.length());
        pos += _s2.length();
    }
}

void FileManager::open_files()
{
    _input_file.open(_file_name.c_str(), std::ios::in);
    if (!_input_file.is_open())
        handle_err("Unable to open input file");
    _input_file.seekg(0, std::ios::end);
    if (_input_file.tellg() == 0)
        handle_err("Input file is empty");
    _input_file.seekg(0, std::ios::beg);
    _output_file.open(_new_file_name.c_str(), std::ios::out);
    if (!_output_file.is_open())
        handle_err("Unable to open output file");
}
void FileManager::close_files()
{
    if (_input_file.is_open())
        _input_file.close();
    if (_output_file.is_open())
        _output_file.close();
}