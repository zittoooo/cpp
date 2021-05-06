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

Zombie    *ZombieEvent::randomChump()
{
    std::string name[10] = {
        "ABC",
        "DEF",
        "EFG",
        "HIJ",
        "123",
        "234",
        "345",
        "456",
        "567",
        "678"
    };
    srand(time(0));
    int rnd = std::rand() % 10;
    Zombie *child = new Zombie(name[rnd], type);
    return (child); 
}