#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type)
{
    this->name = name;
    this->type = type;
}

Zombie::~Zombie()
{
}

void Zombie::announce()
{
    std::cout << "<" + this->name  + " " + this->type + ">" << "Braiiiiiiiinnnnss..\n";
}
