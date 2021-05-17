#include "FragTrap.hpp"

FragTrap::FragTrap(){}
FragTrap::FragTrap(const FragTrap &frag){
    *this = frag;
}
FragTrap::FragTrap(std::string name)
{
    std::cout << "Create FragTrap Player " + name + "\n";
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
    head = "R4G-TP";
    rangeMsg =  "Throwing rocks attacks ";
    meleeMsg = "million volts";
}

FragTrap::~FragTrap() {
    std::cout << name + " GAME OVER\n";
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

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
    if (energy < 25)
    {
        std::cout << name + " don't have enough energy to use the attack!\n";
        return ;
    }
    std::string stat[5] = {
        "Shoot an arrow",
        "shooting a pistol 🔫",
        "Slap on the cheek",
        "Throwing rocks ☄️",
        "million volts ⚡️"
    };
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dis(0, 4);
    energy -= 25;
    std::cout << name << " attacks " << target << " " << stat[dis(gen)] << " skill\n";
    std::cout << name << " energy : " << energy << "\n";
}
