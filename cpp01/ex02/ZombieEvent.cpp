#include "ZombieEvent.hpp"

std::string ZombieEvent::type = "first";

void    ZombieEvent::setZombieType(std::string type)
{
    ZombieEvent::type = type;
}

Zombie *ZombieEvent::newZombie(std::string name)
{
    Zombie *zombie = new Zombie(name, type);

    return (zombie);
}