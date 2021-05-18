#include "Peon.hpp"

Peon::Peon() {}
Peon::Peon(const Peon& peon)
{
    *this = peon;
}
Peon::Peon(std::string name)
{
    this->name = name;
    std::cout << name + " just appeared!\n";
    std::cout << "Zog zog.\n";
}
Peon::~Peon()
{
    std::cout << "Bleuark...\n";
}

Peon& Peon::operator=(const Peon& peon)
{
    this->name = peon.getName();
    return (*this);
}

void Peon::getPolymorphed() const
{
    std::cout << name << " has been turned into a pink pony!\n";
}
