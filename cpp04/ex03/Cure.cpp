#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {}
Cure::Cure(const Cure& cure) { *this = cure; }
Cure::~Cure() {}
Cure& Cure::operator=(const Cure &cure)
{
    _xp = cure._xp;
    return (*this);
}

AMateria* Cure::clone() const
{
    return (new Cure(*this));
}

void Cure::attackMsg(ICharacter & target) const
{
    std::cout << "* heals " << target.getName() << "'s wounds\n";
}