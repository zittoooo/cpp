#include "ZombieEvent.hpp"

int main()
{
    ZombieEvent::setZombieType("magician");
    Zombie *zombie = ZombieEvent::newZombie("Big zombie");
    zombie->announce();

    Zombie *child1 = ZombieEvent::randomChump();
    child1->announce();


    Zombie *child2 = ZombieEvent::randomChump();
    child2->announce();

    delete zombie;
    delete child1;
    delete child2;
}