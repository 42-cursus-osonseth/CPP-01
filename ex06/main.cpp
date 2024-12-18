#include "Harl.hpp"

int main (int argc, char **argv)
{
    if (argc != 2 || !argv[1])
        return std::cout << "Ban numbers of arguments" << std::endl,1; 
    Harl objet(argv);
    objet.complain(objet.get_arg());

    return 0;
}