#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
 : name(name), weapon(weapon) {}

void    HumanA::attack()
{
    std::cout << this->name + " attacks with his " + this->weapon.getType();
    std::cout << "\n";
}
