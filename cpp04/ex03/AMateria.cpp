#include "AMateria.hpp"

AMateria::AMateria() : _xp(0) {}
AMateria::AMateria(std::string const & type) : _xp(0), type(type) {}
AMateria::AMateria(const AMateria& materia)
{
    *this = materia;
}
AMateria::~AMateria() {}

AMateria& AMateria::operator= (const AMateria& materia)
{
    _xp = materia._xp;
    type = materia.type;
    return (*this);
}

std::string const & AMateria::getType() const { return (type); }

unsigned int AMateria::getXP() const { return (_xp); }

void AMateria::use(ICharacter & target)
{
    _xp += 10;
    attackMsg(target);
}
