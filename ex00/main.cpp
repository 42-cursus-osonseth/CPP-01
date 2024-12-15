#include "Zombie.hpp"

int main()
{
    Zombie::randomChump("Stack Zombie");
    std::cout << "--------------------------------------------------------" << std::endl;
    Zombie *z = Zombie::newZombie("Heap Zombie");
    delete z;
    return 0;
}