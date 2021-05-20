#include "RadScorpion.hpp"
#include <iostream>

RadScorpion::RadScorpion()
  : Enemy(80, "RadScorpion")
{
    std::cout << "* click click click *" << "\n";
}

RadScorpion::RadScorpion(const RadScorpion& radScorpion)
{
    *this = radScorpion;
}
RadScorpion::~RadScorpion(void) { std::cout << "* SPROTCH *" << "\n"; }
RadScorpion& RadScorpion::operator= (const RadScorpion& radScorpion)
{
    Enemy::operator=(radScorpion);
    return (*this);
}

void RadScorpion::takeDamage(int damage)
{
    if (damage < 0)
        return ;
    if (hp <= damage)
        hp = 0;
    else
        hp -= damage;
}