#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <random>

class Zombie
{
private:
    std::string name;
    std::string type;
    void printStatus();

public:
    Zombie();
    Zombie(std::string name, std::string type);
    ~Zombie();
    void announce();
};

#endif

