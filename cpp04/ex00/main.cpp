#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Shepherd.hpp"

int main()
{
    Sorcerer robert("Robert", "the Magnificent");
    Victim jim("Jimmy");
    Peon joe("Joe");
    Shepherd kim("kim");

    std::cout << robert << jim << joe << kim;
    robert.polymorph(jim);
    robert.polymorph(joe);
    robert.polymorph(kim);
    return 0;
}