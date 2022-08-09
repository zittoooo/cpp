#pragma once
#include <iostream>
#include <map>

class ASpell;

class SpellBook
{
private:
    std::map<std::string, ASpell *> spell_arr;
    SpellBook(SpellBook const& other);
    SpellBook& operator=(SpellBook const& other);

public:
    SpellBook();
    virtual ~SpellBook();

    void learnSpell(ASpell* spell);
    void forgetSpell(std::string const& name);
    ASpell* createSpell(std::string const& name);
};

#include "ASpell.hpp"