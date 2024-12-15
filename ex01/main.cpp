#include "Zombie.hpp"

#define N 10

int main ()
{
    Zombie *z = Zombie::zombieHorde(N, "BOOOO");
    delete []z;
    return 0;
}