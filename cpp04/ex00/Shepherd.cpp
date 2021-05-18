#include "Shepherd.hpp"

Shepherd::Shepherd() {}
Shepherd::Shepherd(const Shepherd& shepherd)
{
    *this = shepherd;
}
Shepherd::Shepherd(std::string name)
{
    this->name = name;
    std::cout << name + " just appeared!\n";
    std::cout << "shepherd\n";
}

Shepherd::~Shepherd()
{
    std::cout << "Squawk...\n";
}

Shepherd& Shepherd::operator=(const Shepherd& shepherd)
{
    this->name = shepherd.getName();
    return (*this);
}

void Shepherd::getPolymorphed() const
{
    std::cout << name << " has been turned into a cute stick!\n";
}
