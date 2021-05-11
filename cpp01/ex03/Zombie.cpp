#include "Zombie.hpp"
Zombie::Zombie() {
	std::string name[10] = {
        "ABC",
        "DEF",
        "EFG",
        "HIJ",
        "123",
        "234",
        "345",
        "456",
        "567",
        "678"
    };
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dis(0, 9);
    this->name = name[dis(gen)];
    this->type = "magician";
    this->announce();
}

Zombie::~Zombie()
{
    std::cout << this->name + " was starved to death\n";
}

void Zombie::announce()
{
    std::cout << "<" + this->name  + " " + this->type + ">" << "Braiiiiiiiinnnnss..\n";
    this->printStatus();
}

void Zombie::printStatus()
{
    std::string stat[3] = {
        "I am hungry.",
        "I am sleepy.",
        "I play games."
    };
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dis(0, 2);
    std::cout << "<" + this->name + "> " << stat[dis(gen)] << "\n";
}
