#include "SuperTrap.hpp"

SuperTrap::SuperTrap() {}
SuperTrap::SuperTrap(std::string name){
    std::cout << name + " is half Fragtrap, half Ninjatrap.\n";
    hit = 100;
    max_hit = 100;
    energy = 120;
    max_energy = 120;
    level = 1;
    this->name = name;
    melee_attack_damage = 60;
    range_attack_damage = 20;
    armor_damage_reduction = 5;
    head = "R4G-TP SUPER";
    rangeMsg =  "Throwing rocks attacks ";
    meleeMsg = "Swing dagger";
}
SuperTrap::SuperTrap(const SuperTrap & super)
{
    *this = super;
}

SuperTrap& SuperTrap::operator=(const SuperTrap &super)
{
    hit = super.hit;
    max_hit = super.max_hit;
    energy = super.energy;
    max_energy = super.max_energy;
    level = super.level;
    name = super.name;
    melee_attack_damage = super.melee_attack_damage;
    range_attack_damage = super.range_attack_damage;
    armor_damage_reduction = super.armor_damage_reduction;
    dead = super.dead;
    return (*this);
}
SuperTrap::~SuperTrap()
{
    std::cout << "SuperTrap end\n";
}