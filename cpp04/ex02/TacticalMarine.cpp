#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{
    std::cout << "Tactical Marine ready for battle!\n";
}
TacticalMarine::TacticalMarine(const TacticalMarine& marine)
{
    std::cout << "Tactical Marine ready for battle!\n";
    *this = marine;
}
TacticalMarine::~TacticalMarine()
{
    std::cout << "Aaargh...\n";
}
TacticalMarine& TacticalMarine::operator = (const TacticalMarine& tactical)
{
    (void)tactical;
    return (*this);
}

ISpaceMarine* TacticalMarine::clone() const
{
    ISpaceMarine *cl = new TacticalMarine(*this);
    return (cl);
}
void TacticalMarine::battleCry() const
{
    std::cout << "For the holy PLOT!\n";
}
void TacticalMarine::rangedAttack() const
{
    
    std::cout << "* attacks with a bolter *\n";
}
void TacticalMarine::meleeAttack() const
{
    std::cout << "* attacks with a chainsword *\n";
}