#include "ZombieEvent.hpp"

int main()
{
    ZombieEvent::setZombieType("magician");
    Zombie *zombie = ZombieEvent::newZombie("jiholee");
    zombie->announce();

    delete zombie;
}