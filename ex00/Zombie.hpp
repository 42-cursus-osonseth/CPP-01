#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:
    std::string name;

public:
    Zombie();
    ~Zombie();
    Zombie(std::string name);
    void announce(void) const;
    static Zombie *newZombie(std::string name);
    static void randomChump(std::string name);
};

#endif