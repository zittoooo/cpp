#include "SuperTrap.hpp"

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

SuperTrap::~SuperTrap() {}