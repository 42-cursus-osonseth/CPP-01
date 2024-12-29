#include "Zombie.hpp"

Zombie *Zombie::zombieHorde(int N, std::string name)
{
    Zombie *z = new Zombie[N]; 
    for (int i = 0; i < N; i++)
        new (&z[i]) Zombie(name);
    return z; 
}
