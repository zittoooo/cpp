#include "SuperMutant.hpp"
#include <iostream>

SuperMutant::SuperMutant(void) 
 : Enemy(170, "Super Mutant")
 {
     std::cout << "Gaaah. Me want smash heads!\n";

 }
SuperMutant::SuperMutant(const SuperMutant& superMutant)
{
    *this = superMutant;
}
SuperMutant::~SuperMutant(void) { std::cout << "Aaargh...\n"; }
SuperMutant& SuperMutant::operator= (const SuperMutant& superMutant)
{
    Enemy::operator=(superMutant);
    return (*this);
}
void SuperMutant::takeDamage(int damage)
{
    if (hp <= damage - 3)
        hp = 0;
    else
        hp -= (damage - 3);
}