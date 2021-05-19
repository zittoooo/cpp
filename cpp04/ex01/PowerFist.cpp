#include "PowerFist.hpp"
#include <iostream>

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50){}
PowerFist::PowerFist(const PowerFist& powerFist) { *this = powerFist; }
PowerFist::~PowerFist() {}
PowerFist& PowerFist::operator = (const PowerFist& powerFist)
{
    AWeapon::operator=(powerFist);
    return (*this);
}
void PowerFist::attack() const
{
    std::cout << "* pschhh... SBAM! *\n";
}