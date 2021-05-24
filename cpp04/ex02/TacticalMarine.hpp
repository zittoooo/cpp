#ifndef TACTICAL_MARINE_HPP
# define TACTICAL_MARINE_HPP
#include <iostream>
# include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
private:

public:
    TacticalMarine();
    TacticalMarine(const TacticalMarine& marine);
    ~TacticalMarine();
    TacticalMarine& operator = (const TacticalMarine& tactical);

    ISpaceMarine* clone() const;
    void battleCry() const;
    void rangedAttack() const;
    void meleeAttack() const;
};


#endif