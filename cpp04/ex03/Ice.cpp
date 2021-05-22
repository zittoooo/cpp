#include "Ice.hpp"

void Ice::attackMsg(ICharacter & target)
{
    std::cout << "* shoots an ice bolt " << "at " << target.getName();
}
