#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {}
Ice::Ice(const Ice & ice) { *this = ice; }
Ice::~Ice() {}

Ice& Ice::operator = (const Ice& ice)
{
    _xp = ice._xp;
    return (*this);
}

AMateria* Ice::clone() const
{
    return (new Ice(*this));
}

void Ice::attackMsg(ICharacter & target) const
{
    std::cout << "* shoots an ice bolt " << "at " << target.getName() << "\n";
}
