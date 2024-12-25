#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl
{
private:
    std::string levels[4];
    void (Harl::*func_ptr[5])() const;
    void debug(void) const;
    void info(void) const;
    void warning(void) const;
    void error(void) const;
    void not_valid_level() const;

public:
    Harl();
    ~Harl();
    void init_string_array();
    void init_func_array();
        void complain(std::string level);
};

#endif
