#include "ZombieEvent.hpp"

int main()
{
    srand(time(NULL));
    ZombieEvent::setZombieType("magician");
    Zombie *zombie = ZombieEvent::newZombie("jiholee");
    zombie->announce();

    Zombie *child = ZombieEvent::randomChump();
    child->announce();

    Zombie *child2 = ZombieEvent::randomChump();
    child2->announce();

    delete zombie;
    delete child;
    delete child2;
}