#include "Sorcerer.hpp"
#include <iostream>

Sorcerer::Sorcerer() {}
Sorcerer::Sorcerer(std::string name, std::string title)
{
    this->name = name;
    this->title = title;
    std::cout << name + ", " << title << ", is born!\n";  
}

Sorcerer::~Sorcerer()
{
    std::cout << name + ", " + "the "+ title + ", " + "is dead. Consequences will never be the same!\n";
}

Sorcerer& Sorcerer::operator=(const Sorcerer& sorcerer)
{
    this->name = sorcerer.getName();
    return (*this);
}

std::string Sorcerer::getName() const
{
    return (this->name);
}
std::string Sorcerer::getTitle() const
{
    return (this->title);
}

void Sorcerer::polymorph(Victim const &victim) const
{
    victim.getPolymorphed();
}

std::ostream& operator<<(std::ostream& stm, const Sorcerer& sorcerer)
{
    std::cout << "I am " + sorcerer.getName() + ", " + sorcerer.getTitle() + ", and I like ponies!\n";
    return (stm);
}
