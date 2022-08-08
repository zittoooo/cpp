#pragma once
#include <iostream>

class ASpell;

class ATarget
{
private:
    std::string type;
public:
    ATarget();
    ATarget(std::string const &type);
    virtual ~ATarget();
    ATarget(ATarget const& target);
    ATarget& operator=(ATarget const& target);

    std::string const& getType() const;
    virtual ATarget* clone() const = 0;

    void getHitBySpell(ASpell const& spell) const;
};

#include "ASpell.hpp"