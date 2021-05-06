#include "ZombieEvent.hpp"

int main()
{
    srand(time(0));
    ZombieEvent::setZombieType("magician");
    Zombie *zombie = ZombieEvent::newZombie("jiholee");
    zombie->announce();

    Zombie *child = ZombieEvent::randomChump();
    child->announce();

    delete zombie;
    delete child;
}