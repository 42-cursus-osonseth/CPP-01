#include "Harl.hpp"

Harl::Harl() 
{
    init_string_array();
    init_func_array();
}
Harl::~Harl() {}

void Harl::init_string_array()
{
    levels[0] = "DEBUG";
    levels[1] = "INFO";
    levels[2] = "WARNING";
    levels[3] = "ERROR";
}
void Harl::init_func_array()
{
    func_ptr[0] = &Harl::debug;
    func_ptr[1] = &Harl::info;
    func_ptr[2] = &Harl::warning;
    func_ptr[3] = &Harl::error;
    func_ptr[4] = &Harl::not_valid_level;
}
void Harl::not_valid_level(void) const
{
    return;
}
void Harl::debug(void) const
{
    std::cout << "it's DEBUG message" << std::endl;
}
void Harl::info(void) const
{
    std::cout << "it's INFO message" << std::endl;
}

void Harl::warning(void) const
{
    std::cout << "it's WARNING message" << std::endl;
}

void Harl::error(void) const
{
    std::cout << "it's ERROR message" << std::endl;
}
void Harl::complain( std::string level )
{
    int i = 0;
    while (levels[i] != level && i < 4)
        i++;
    (this->*(func_ptr[i]))();
}
