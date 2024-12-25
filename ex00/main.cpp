#include "Zombie.hpp"

int main()
{
    Zombie *z = Zombie::newZombie("Heap Zombie");
    Zombie::randomChump("Stack Zombie");
    Zombie::randomChump("Stack2 zombie");
    Zombie *x = Zombie::newZombie("Heap2 Zombie");
    x->announce();
    delete z;
    delete x;
    return 0;
}