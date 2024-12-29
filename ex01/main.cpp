#include "Zombie.hpp"

int main ()
{
    Zombie *z = Zombie::zombieHorde(10, "BOOOO");
    delete []z;
    return 0;
}