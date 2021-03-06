#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap()
{
    std::cout << "new Ninjan\n";
}
NinjaTrap::NinjaTrap(const NinjaTrap& ninja)
{
    *this = ninja;
}
NinjaTrap::NinjaTrap(std::string name)
{
    std::cout << name + " ninja appeared.\n";
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
NinjaTrap& NinjaTrap::operator=(const NinjaTrap & ninja)
{
    hit = ninja.hit;
    max_hit = ninja.hit;
    energy = ninja.energy;
    max_energy = ninja.max_energy;
    level = ninja.level;
    name = ninja.name;
    melee_attack_damage = ninja.melee_attack_damage;
    range_attack_damage = ninja.range_attack_damage;
    armor_damage_reduction = ninja.armor_damage_reduction;
    dead = ninja.dead;
    return (*this);
}
void NinjaTrap::ninjaShoebox(FragTrap & Frag)
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
    energy -= 25;
    Frag.takeDamage(25);
    std::cout << name << " attacks " << Frag.getName() << " " << stat[rand() % 5] << " skill\n";
    std::cout << name << " energy : " << energy << "\n";
}

void NinjaTrap::ninjaShoebox(ScavTrap & Scav)
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
    energy -= 25;
    Scav.takeDamage(25);
    std::cout << name << " attacks " << Scav.getName() << " " << stat[rand() % 5] << " skill\n";
    std::cout << name << " energy : " << energy << "\n";
}

void NinjaTrap::ninjaShoebox(NinjaTrap & ninja)
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
    energy -= 25;
    ninja.takeDamage(25);
    std::cout << name << " attacks " << ninja.getName() << " " << stat[rand() % 5] << " skill\n";
    std::cout << name << " energy : " << energy << "\n";
}