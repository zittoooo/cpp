#include "ClapTrap.hpp"

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap is gone.\n";
}
ClapTrap::ClapTrap()
{
    std::cout << "new ClapTrap\n";
}
ClapTrap::ClapTrap(const ClapTrap & clap)
{
    *this = clap;
}
ClapTrap& ClapTrap::operator=(const ClapTrap & clap)
{
    hit = clap.hit;
    max_hit = clap.hit;
    energy = clap.energy;
    max_energy = clap.max_energy;
    level = clap.level;
    name = clap.name;
    melee_attack_damage = clap.melee_attack_damage;
    range_attack_damage = clap.range_attack_damage;
    armor_damage_reduction = clap.armor_damage_reduction;
    dead = clap.dead;
    return (*this);
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

std::string ClapTrap::getName()
{
    return (this->name);
}