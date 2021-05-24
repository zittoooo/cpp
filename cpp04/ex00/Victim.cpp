#include "Victim.hpp"


Victim::Victim() {}
Victim::Victim(std::string name)
{
    this->name = name;
    std::cout << "Some random victim called " << name + " just appeared!\n";
}
Victim::Victim(const Victim& victim)
{
    *this = victim;
}

Victim::~Victim()
{
    std::cout << "Victim "<< name + " just died for no apparent reason!\n";
}

Victim& Victim::operator=(const Victim& victim)
{
    this->name = victim.getName();
    return (*this);
}

std::string Victim::getName() const
{
    return (this->name);
}

void Victim::getPolymorphed() const
{
    std::cout << this->name << " has been turned into a cute little sheep!\n";
}

std::ostream& operator<<(std::ostream& stm, const Victim& victim)
{
    std::cout << "I'm " + victim.getName() + ", and I like otters!\n";
    return (stm);
}