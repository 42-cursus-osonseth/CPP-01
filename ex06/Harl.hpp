#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl
{
private:
    std::string arg;
    std::string levels[4];
    void (Harl::*func_ptr[5])();
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);

public:
    Harl(char **argv);
    ~Harl();
    void init_string_array();
    void init_func_array();
    void not_valid_level();
    std::string get_arg();
    void complain( std::string level );
};

#endif
