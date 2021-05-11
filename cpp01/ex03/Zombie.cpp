#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::Zombie(std::string name, std::string type)
{
    this->name = name;
    this->type = type;
}

Zombie::~Zombie()
{
    std::cout << "<" + this->name + " " + this->type + ">" + " was starved to death\n";
}

void Zombie::announce()
{
    std::cout << "<" + this->name  + " " + this->type + ">" << " Braiiiiiiiinnnnss..\n";
    this->printStatus();
}

void Zombie::printStatus()
{
    std::string stat[3] = {
        "I am hungry. 🍗",
        "I am sleepy. 😪",
        "I play games. 🕹"
    };
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dis(0, 2);
    std::cout << "<" + this->name + " " +  this->type + "> " << stat[dis(gen)] << "\n";
}
