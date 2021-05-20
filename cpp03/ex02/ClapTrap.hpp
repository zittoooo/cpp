#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>
# include <string>
# include <time.h>

class ClapTrap{
protected:
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

    std::string rangeMsg;
    std::string meleeMsg;
    std::string DamageMsg;
    std::string repairMsg; 
    std::string head;

public:
    ClapTrap();
    ClapTrap(const ClapTrap & clap);
    ~ClapTrap();
    ClapTrap& operator=(const ClapTrap & clap);
    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif