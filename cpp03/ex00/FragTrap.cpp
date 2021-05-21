#include "FragTrap.hpp"

FragTrap::FragTrap(){}
FragTrap::~FragTrap() {
    std::cout << name + " FragTrap dead\n";
}
FragTrap::FragTrap(std::string name)
{
    std::cout << "Create Player " + name + "\n";
    hit = 100;
    max_hit = 100;
    energy = 100;
    max_energy = 100;
    level = 1;
    this->name = name;
    melee_attack_damage = 30;
    range_attack_damage = 20;
    armor_damage_reduction = 5;
    dead = 0;
}

FragTrap::FragTrap(const FragTrap &frag)
{
    *this = frag;
}

FragTrap& FragTrap:: operator=(const FragTrap& frag)
{
    hit = frag.hit;
    max_hit = frag.max_hit;
    energy = frag.energy;
    max_energy = frag.max_energy;
    level = frag.level;
    name = frag.name;
    melee_attack_damage = frag.melee_attack_damage;
    range_attack_damage = frag.range_attack_damage;
    armor_damage_reduction = frag.armor_damage_reduction;
    dead = frag.dead;
    return (*this);
}

void FragTrap::rangedAttack(std::string const & target)
{
    std::cout << head << " <" << name + ">  attacks " << target <<
        ", causing " << "<" << range_attack_damage << "> points of damage!\n";

}

void FragTrap::meleeAttack(std::string const & target)
{
    std::cout << head << " <" << name << ">  attacks " << target <<
        ", causing " << "<" << melee_attack_damage << "> points of damage!\n";
}

void FragTrap::takeDamage(unsigned int amount)
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

void FragTrap::beRepaired(unsigned int amount)
{
    if (hit + amount >= UINT_MAX || hit + amount >= max_hit)
    {
        hit = max_hit;
        std::cout << name << " HP : " << hit << "\n"; 
        return ;
    }
    hit += amount;
    std::cout << name << " HP : " << hit << " enegy : " << energy <<  "\n"; 
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
    if (energy < 25)
    {
        std::cout << name + " don't have enough energy to use the attack!\n";
        return ;
    }
    std::string stat[5] = {
        "beat with a stick",
        "Avada Kedavra",
        "Slap on the cheek",
        "Throwing rocks",
        "million volts"
    };
    energy -= 25;
    std::cout << name << " attacks " << target << " " << stat[rand() % 5] << " skill\n";
    std::cout << name << " energy : " << energy << "\n";
}