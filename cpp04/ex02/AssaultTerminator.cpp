#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator() { std::cout << "* teleports from space *\n"; }
AssaultTerminator::AssaultTerminator(const AssaultTerminator& assault)
{
    *this = assault;
}
AssaultTerminator::~AssaultTerminator() { std::cout << "I’ll be back...\n"; }
AssaultTerminator& AssaultTerminator::operator= (const AssaultTerminator& assault)
{
    (void)assault;
    return (*this);
}
ISpaceMarine* AssaultTerminator::clone() const
{
    ISpaceMarine *cl = new AssaultTerminator(*this);
    return (cl);
}
void AssaultTerminator::battleCry() const
{
    std::cout <<  "This code is unclean. PURIFY IT!\n";
}

void AssaultTerminator::rangedAttack() const
{
    std::cout << "* does nothing *\n";
}

void AssaultTerminator::meleeAttack() const
{
    std::cout << "* attacks with chainfists *\n";
}