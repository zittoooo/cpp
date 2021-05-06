#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP
#include <iostream>
#include <string>
#include "Zombie.hpp"

class ZombieEvent
{
private:
    static std::string type;
    /* data */
public:
    static void setZombieType(std::string type);
    static Zombie *newZombie(std::string name);
    // static randomChump(Zombie *zombie);
};

// std::string ZombieEvent::type = "first";

#endif