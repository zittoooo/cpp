#ifndef ASSAULT_TERMINATOR_HPP
# define ASSAULT_TERMINATOR_HPP
# include <iostream>
# include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
private:

public:
    AssaultTerminator();
    AssaultTerminator(const AssaultTerminator& assault);
    ~AssaultTerminator();
    AssaultTerminator& operator = (const AssaultTerminator& assault);

    ISpaceMarine* clone() const;
    void battleCry() const;
    void rangedAttack() const;
    void meleeAttack() const;
};

#endif