#include "Character.hpp"

Character::Character(void)
 : name("name"), AP(40), weapon(NULL) {}
Character::Character(std::string const & name)
{
    this->name = name;
    AP = 40;
    weapon = 0;
}
Character::Character(const Character& character) { *this = character; }
Character::~Character(void) {}
Character& Character::operator = (const Character& character)
{
    name = character.name;
    AP = character.AP;
    weapon = character.weapon;
    return (*this);
}
void Character::recoverAP()
{
    if (AP + 10 >= 40)
        AP = 40;
    else
        AP += 10;
}
void Character::equip(AWeapon *weapon) { this->weapon = weapon; }
void Character::attack(Enemy* enemy)
{
    if (AP < weapon->getAPCost())
        return ;
    std::cout << name << " attacks " << enemy->getType() 
        << " with a " << weapon->getName() << "\n";
    weapon->attack();
    enemy->takeDamage(weapon->getDamage());
    AP -= weapon->getAPCost();
}
std::string const& Character::getName() const { return (name); }
int const& Character::getAP() const { return (AP); }

AWeapon* Character::getWeapon() const { return (weapon); } 

std::ostream& operator<<(std::ostream& stm, const Character& character)
{
    if (!character.getWeapon())
        std::cout << character.getName() << " has " << character.getAP() << " and is unarmed\n";
    else
        std::cout << character.getName() << " has " << character.getAP() << " and wields a " << character.getWeapon()->getName() << "\n";
    return (stm);
}
