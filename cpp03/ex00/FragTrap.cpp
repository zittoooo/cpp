#include "FragTrap.hpp"

FragTrap::FragTrap(){}
FragTrap::~FragTrap() {
    std::cout << name + " GAME OVER\n";
}
FragTrap::FragTrap(std::string name)
{
    std::cout << "Create Player " + name + "\n";
    this->hit = 100;
    this->max_hit = 100;
    this->energy = 100;
    this->max_energy = 100;
    this->level = 1;
    this->name = name;
    this->melee_attack_damage = 30;
    this->range_attack_damage = 20;
    this->armor_damage_reduction = 5;
    this->dead = 0;
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
    std::cout << head << " <" << this->name + ">  attacks " << target <<
        ", causing " << "<" << this->range_attack_damage << "> points of damage!\n";

}

void FragTrap::meleeAttack(std::string const & target)
{
    std::cout << head << " <" << this->name << ">  attacks " << target <<
        ", causing " << "<" << this->melee_attack_damage << "> points of damage!\n";
}

void FragTrap::takeDamage(unsigned int amount)
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

void FragTrap::beRepaired(unsigned int amount)
{
    if (this->hit + amount >= UINT_MAX || this->hit + amount >= this->max_hit)
    {
        this->hit = this->max_hit;
        std::cout << this->name << " HP : " << this->hit << "\n"; 
        return ;
    }
    this->hit += amount;
    std::cout << this->name << " HP : " << this->hit << " enegy : " << this->energy <<  "\n"; 
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
    if (this->energy < 25)
    {
        std::cout << this->name + " don't have enough energy to use the attack!\n";
        return ;
    }
    std::string stat[5] = {
        "beat with a stick",
        "Avada Kedavra",
        "Slap on the cheek",
        "Throwing rocks",
        "million volts"
    };
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dis(0, 4);
    this->energy -= 25;
    std::cout << this->name << " attacks " << target << " " << stat[dis(gen)] << " skill\n";
    std::cout << this->name << " energy : " << this->energy << "\n";
}