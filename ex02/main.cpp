#include <iostream>
#define YELLOW "\033[33m"
#define GREEN "\033[32m"
#define BLUE "\033[34m"
#define PURPLE "\033[35m"
#define RESET "\033[0m"

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout
        << PURPLE
        << "------------------- ADRESS ------------------"
        << RESET << std::endl;
    std::cout
        << YELLOW << "     adress of STR         : " << RESET
        << GREEN << &str << RESET << std::endl;
    std::cout
        << YELLOW << "adress held by stringPTR   : " << RESET
        << GREEN << stringPTR << RESET << std::endl
        << RESET;
    std::cout
        << YELLOW << "adress held by stringREF   : " << RESET
        << GREEN << &stringREF << RESET << std::endl;
    std::cout
        << PURPLE
        << "-------------------- VALUE ------------------"
        << RESET << std::endl;
    std::cout
        << YELLOW << "       value of STR        : " << RESET
        << BLUE << str << RESET << std::endl;
    std::cout
        << YELLOW << "value pointed by stringPTR : " << RESET
        << BLUE << *stringPTR << RESET << std::endl
        << RESET;
    std::cout
        << YELLOW << "value pointed by stringREF : " << RESET
        << BLUE << stringREF << RESET << std::endl;
    std::cout
        << PURPLE
        << "---------------------------------------------"
        << RESET << std::endl;
    return 0;
}