#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "new ClapTrap\n";
}
ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap is gone.\n";
}
void ClapTrap::rangedAttack(std::string const & target)
{
    std::cout << head << " <" << name + "> " + rangeMsg  + " attacks " << target <<
        ", causing " << "<" << range_attack_damage << "> points of damage!\n";
}

void ClapTrap::meleeAttack(std::string const & target)
{
    std::cout << head << " <" << name << "> " + meleeMsg + " attacks " << target <<
        ", causing " << "<" << melee_attack_damage << "> points of damage!\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (hit + armor_damage_reduction <= amount)
    {
        hit = 0;
        std::cout << name << " HP : " << hit << "\n"; 
        dead = 1;
    }
    else
    {
        if (amount < armor_damage_reduction)
        {
            std::cout << name << " HP : " << hit << "\n"; 
            return ;
        }
        hit -= (amount - armor_damage_reduction); 
        std::cout << name << " HP : " << hit << "\n";          
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (hit + amount >= UINT_MAX || hit + amount >= max_hit)
    {
        hit = max_hit;
        std::cout << name << " HP : " << hit << "\n"; 
        return ;
    }
    hit += amount;
    std::cout << name << " HP : " << hit << "\n"; 
}