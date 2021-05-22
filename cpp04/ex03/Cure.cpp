#include "Cure.hpp"

void Cure::attackMsg(ICharacter & target)
{
    std::cout << "* heals " << target.getName() << "'s wounds\n";
}