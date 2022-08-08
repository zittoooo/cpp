#pragma once
#include <iostream>

class ATarget;

class ASpell
{
private:
    std::string name;
    std::string effects;

public:
    ASpell();
    virtual ~ASpell();
    ASpell(ASpell const& aspell);
    ASpell(std::string name, std::string effects);
    ASpell& operator=(ASpell const& aspell);

    std::string getName() const;
    std::string getEffects() const;

    virtual ASpell* clone() const = 0;
    void launch(ATarget const& target) const;

};

#include "ATarget.hpp"