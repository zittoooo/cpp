#include "Ice.hpp"

Ice::Ice()
{
    type = "ice";
}
Ice::Ice(const Ice & ice)
{
    type = ice.type;
}
Ice::~Ice() {}

Ice& Ice::operator = (const Ice& ice)
{
    type = ice.type;
    return (*this);
}

std::string const& Ice::getType() const
{
    return (type);
}
unsigned int Ice::getXP() const 
{
    return (_xp);
}

AMateria* Ice::clone() const
{
    return ();
}

void Ice::attackMsg(ICharacter & target) const
{
    std::cout << "* shoots an ice bolt " << "at " << target.getName();
}
