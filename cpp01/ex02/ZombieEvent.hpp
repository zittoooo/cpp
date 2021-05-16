#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP
#include <iostream>
#include <string>
#include <random>
#include "Zombie.hpp"

class ZombieEvent
{
private:
    static std::string type;
public:
    static void setZombieType(std::string type);
    static Zombie *newZombie(std::string name);
    static Zombie *randomChump();
};

#endif