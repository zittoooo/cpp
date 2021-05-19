#include "Character.hpp"

Character::Character(void)
 : name("name"), AP(40), weapon(NULL) {}
Character::Character(std::string const & name)
{
    this->name = name;
    AP = 40;
    weapon = 0;
}
Character::Character(const Character& character) {}
Character::~Character(void) {}
Character& Character::operator = (const Character& character)
{
    name = character.name;
    AP = character.AP;
    AWeapon* weapon = character.weapon;
}
void Character::recoverAP()
{
    if (AP + 10 >= 40)
        AP = 40;
    else
        AP += 10;
}
void Character::equip(AWeapon *weapon)
{

}
void Character::attack(Enemy* enemy)
{

}
std::string const& Character::getName() const
{

}