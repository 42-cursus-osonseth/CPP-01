#include "Harl.hpp"

Harl::Harl(char **argv) : arg(argv[1])
{
    init_string_array();
    init_func_array();
}
Harl::~Harl() {}

std::string Harl::get_arg()
{
    return arg;
}

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
void Harl::not_valid_level(void)
{
    std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}
void Harl::debug(void)
{
    std::cout << "it's DEBUG message" << std::endl;
}
void Harl::info(void)
{
    std::cout << "it's INFO message" << std::endl;
}

void Harl::warning(void)
{
    std::cout << "it's WARNING message" << std::endl;
}

void Harl::error(void)
{
    std::cout << "it's ERROR message" << std::endl;
}
void Harl::complain(std::string level)
{
    int i = 0;
    while (levels[i] != level && i < 4)
        i++;
    switch (i)
    {
    case 0:
        debug();
        break;
    case 1:
        debug();
        info();
        break;
    case 2:
        debug();
        info();
        warning();
        break;
    case 3:
        debug();
        info();
        warning();
        error();
        break;

    default:
        not_valid_level();
        break;
    }
}
