#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void) 
    : AWeapon("Plasma Rifle", 5, 21) {}
PlasmaRifle::PlasmaRifle(const PlasmaRifle& plasmaRifle) { *this = plasmaRifle; }
PlasmaRifle::~PlasmaRifle(void) {}
PlasmaRifle& PlasmaRifle::operator = (const PlasmaRifle& plasmaRifle)
{
    AWeapon::operator = (plasmaRifle);
    return (*this);
}

void PlasmaRifle::attack() const
{
    std::cout << "* piouuu piouuu piouuu *\n";
}