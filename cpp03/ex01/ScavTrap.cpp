#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {}
ScavTrap::ScavTrap(std::string name)
{
    std::cout << "Create ScavTrap " << name << "\n";
    hit = 100;
    max_hit = 100;
    energy = 50;
    max_energy = 50;
    level = 1;
    this->name = name;
    melee_attack_damage = 20;
    range_attack_damage = 15;
    armor_damage_reduction = 3;
}

ScavTrap::ScavTrap(const ScavTrap & scav)
{
    *this = scav;
}

ScavTrap::~ScavTrap() {
    std::cout << name + "destroyed\n";
}

ScavTrap& ScavTrap::operator=(const ScavTrap & scav)
{
    hit = scav.hit;
    max_hit = scav.max_hit;
    energy = scav.energy;
    max_energy = scav.max_energy;
    level = scav.level;
    name = scav.name;
    melee_attack_damage = scav.melee_attack_damage;
    range_attack_damage = scav.range_attack_damage;
    armor_damage_reduction = scav.armor_damage_reduction;
    dead = scav.dead;
    return (*this);
}

void ScavTrap::rangedAttack(std::string const & target)
{
    std::cout << "<" << name + ">  attacks " << target <<
        ", causing " << "<" << range_attack_damage << "> points of damage!\n";
}

void ScavTrap::meleeAttack(std::string const & target)
{
    std::cout << "<" << name << ">  attacks " << target <<
        ", causing " << "<" << melee_attack_damage << "> points of damage!\n";    
}

void ScavTrap::takeDamage(unsigned int amount)
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

void ScavTrap::beRepaired(unsigned int amount)
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

void ScavTrap::challengeNewcomer(std::string const & target)
{
    if (energy < 25)
    {
        std::cout << name + " don't have enough energy to use the attack!\n";
        return ;
    }
    std::string stat[5] = {
        "Fireball",
        "Pulling hair",
        "Slap on the cheek",
        "Spraying pest control",
        "million volts"
    };
    energy -= 25;
    std::cout << name << " attacks " << target << " " << stat[rand() % 5] << " skill\n";
    std::cout << name << " energy : " << energy << "\n";
}