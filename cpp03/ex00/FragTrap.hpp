#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
#include <iostream>
#include <string>
#include <random>

class FragTrap{
private:
    unsigned long long  hit; // 체력
    unsigned long long max_hit;
    unsigned long long energy; // 스킬
    unsigned long long max_energy;
    unsigned long long level;
    std::string name;
    unsigned long long melee_attack_damage;
    unsigned long long range_attack_damage;
    unsigned long long armor_damage_reduction;
    bool dead;
    
public:
    // FragTrap();
    ~FragTrap();
    FragTrap(std::string name);
    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void vaulthunter_dot_exe(std::string const & target);
};
static std::string head = "FR4G-TP";
#endif