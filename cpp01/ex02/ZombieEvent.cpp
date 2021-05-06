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
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dis(0, 9);
    Zombie *child = new Zombie(name[dis(gen)], type);
    return (child); 
}