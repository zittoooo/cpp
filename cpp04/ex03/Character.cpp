#include "Character.hpp"

Character::Character()
{
    memset(inventory, 0, sizeof(inventory));
}
Character::Character(const Character & character) 
{
    for (int i = 0; i < 4; i++)
    {
        if (character.inventory[i])
            this->inventory[i] = character.inventory[i]->clone();
        else
            this->inventory[i] = 0;
    }
    this->name = character.name;
}
Character::Character(std::string name)  : name(name) {}
Character::~Character()
{
    for (int i = 0 ; i < 4; i++)
    {
        if (inventory[i])
            delete inventory[i];
    }
}
Character& Character::operator = (const Character & character)
{
    for (int i = 0 ; i < 4; i++)
    {
        if (inventory[i])
            delete inventory[i];
    }
    for (int i = 0; i < 4; i++)
    {
        if (character.inventory[i])
            inventory[i] = character.inventory[i]->clone();
        else
            this->inventory[i] = 0;
    }
    name = character.name;
    return (*this);
}

std::string const & Character::getName() const
{
    return (name);
}

void Character::equip(AMateria * m)
{
    for (int i = 0; i < 4; i++)
    {
        if (!inventory[i]){
            inventory[i] = m;
            break ;
        }
    }
}
void Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4)
        inventory[idx] = 0;
}
void Character::use(int idx, ICharacter& target)
{
    if (inventory[idx])
        inventory[idx]->use(target);
}