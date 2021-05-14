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
    if (energy < 25)
    {
        std::cout << name + " don't have enough energy to use the attack!\n";
        return ;
    }
    std::string stat[5] = {
        "throwing stars ⚙️",
        "Swing dagger 🔪 ",
        "Slap on the cheek",
        "Throwing a bomb 💣",
        "million volts ⚡️"
    };
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dis(0, 4);
    energy -= 25;
    std::cout << name << " attacks " << target << " " << stat[dis(gen)] << " skill\n";
    std::cout << name << " energy : " << energy << "\n";
}