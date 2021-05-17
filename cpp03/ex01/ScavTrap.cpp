#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {}
ScavTrap::ScavTrap(std::string name)
{
    std::cout << "Create ScavTrap " << name << "\n";
    this->hit = 100;
    this->max_hit = 100;
    this->energy = 50;
    this->max_energy = 50;
    this->level = 1;
    this->name = name;
    this->melee_attack_damage = 20;
    this->range_attack_damage = 15;
    this->armor_damage_reduction = 3;
}

ScavTrap::ScavTrap(const ScavTrap & scav)
{
    *this = scav;
}

ScavTrap::~ScavTrap() {
    std::cout << this->name + "destroyed\n";
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
    std::cout << "<" << this->name + ">  attacks " << target <<
        ", causing " << "<" << this->range_attack_damage << "> points of damage!\n";
}

void ScavTrap::meleeAttack(std::string const & target)
{
    std::cout << "<" << this->name << ">  attacks " << target <<
        ", causing " << "<" << this->melee_attack_damage << "> points of damage!\n";    
}

void ScavTrap::takeDamage(unsigned int amount)
{
    if (this->hit + this->armor_damage_reduction <= amount)
    {
        this->hit = 0;
        std::cout << this->name << " HP : " << this->hit << "\n"; 
        this->dead = 1;
    }
    else
    {
        if (amount < this->armor_damage_reduction)
        {
            std::cout << this->name << " HP : " << this->hit << "\n"; 
            return ;
        }
        this->hit -= (amount - this->armor_damage_reduction); 
        std::cout << this->name << " HP : " << this->hit << "\n";          
    }
}

void ScavTrap::beRepaired(unsigned int amount)
{
    if (this->hit + amount >= UINT_MAX || this->hit + amount >= this->max_hit)
    {
        this->hit = this->max_hit;
        std::cout << this->name << " HP : " << this->hit << "\n"; 
        return ;
    }
    this->hit += amount;
    std::cout << this->name << " HP : " << this->hit << "\n"; 
}

void ScavTrap::challengeNewcomer(std::string const & target)
{
    if (this->energy < 25)
    {
        std::cout << this->name + " don't have enough energy to use the attack!\n";
        return ;
    }
    std::string stat[5] = {
        "Fireball",
        "Pulling hair",
        "Slap on the cheek",
        "Spraying pest control",
        "million volts"
    };
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dis(0, 4);
    this->energy -= 25;
    std::cout << this->name << " attacks " << target << " " << stat[dis(gen)] << " skill\n";
    std::cout << this->name << " energy : " << this->energy << "\n";
}