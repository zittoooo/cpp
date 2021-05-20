#include "AWeapon.hpp"

AWeapon::AWeapon(void) {}
AWeapon::AWeapon(std::string const & name, int apcost, int damage)
    : name(name), apcost(apcost), damage(damage) {}
AWeapon::AWeapon(const AWeapon& aWeapon)
{
    (*this) = aWeapon;
}
AWeapon::~AWeapon() {}
AWeapon& AWeapon::operator = (const AWeapon& aWeapon)
{
    name=aWeapon.name;
    apcost=aWeapon.apcost;
    damage=aWeapon.damage;
    return (*this);
}

std::string const AWeapon::getName() const { return (name); }
int AWeapon::getAPCost() const { return (apcost); }
int AWeapon::getDamage() const { return (damage); }
