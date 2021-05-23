#include "Cure.hpp"

Cure::Cure() { type = "cure"; }
Cure::Cure(const Cure& cure) { type = cure.type; }
Cure::~Cure() {}
Cure& Cure::operator=(const Cure &cure)
{
    type = cure.type;
    return (*this);
}

std::string const & Cure::getType() const
{
    return (type);
}

unsigned int Cure::getXP() const
{
    return (_xp);
}

AMateria* Cure::clone() const
{
    return (new Cure(*this));
}

void Cure::attackMsg(ICharacter & target) const
{
    std::cout << "* heals " << target.getName() << "'s wounds\n";
}