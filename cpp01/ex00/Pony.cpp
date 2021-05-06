#include "Pony.hpp"

Pony::Pony(std::string name)
{
    std::cout << "my name is " + name << '\n';
    this->name = name;
}

Pony::~Pony()
{
    std::cout << this->name << " is dead\n";
}