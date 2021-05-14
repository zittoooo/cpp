#include "FragTrap.hpp"

FragTrap::~FragTrap() {
    std::cout << name + " GAME OVER\n";
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
    head = "R4G-TP Frag";
    rangeMsg =  "Throwing rocks attacks ";
    meleeMsg = "million volts";
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