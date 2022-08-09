#pragma once
#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"

class ASpell;
class ATarget;

class Warlock
{
private:
    std::string name;
    std::string title;

    Warlock();
    Warlock(Warlock const & warlock);
    Warlock& operator=(Warlock const& walrock);
    // std::map<std::string, ASpell*> arr;
    SpellBook book;
public:
    Warlock(std::string const &name, std::string const &title);
    ~Warlock();

    std::string const& getName() const;
    std::string const& getTitle() const;
    void setTitle(std::string const& title);
    void introduce() const;

    void learnSpell(ASpell * spell);
    void forgetSpell(std::string name);
    void launchSpell(std::string name, ATarget & target);
};

#include "ASpell.hpp"
#include "ATarget.hpp"