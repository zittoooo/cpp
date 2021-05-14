#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name)
{
    std::cout << "A ninja appeared.\n";
    hit = 60;
    max_hit = 60;
    energy = 120;
    max_energy = 120;
    level = 1;
    this->name = name;
    melee_attack_damage = 60;
    range_attack_damage = 5;
    armor_damage_reduction = 0;
    head = "R4G-TP Frag Ninja";
    rangeMsg = "throwing stars";
    meleeMsg = "Swing dagger";
}

NinjaTrap::~NinjaTrap()
{
    std::cout << name + " ninja Disappeared.\n";
}

void NinjaTrap::ninjaShoebox(std::string const & target)
{
    
}