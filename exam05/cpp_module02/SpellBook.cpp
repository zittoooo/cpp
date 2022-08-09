#include "SpellBook.hpp"

SpellBook::SpellBook() {}
SpellBook::~SpellBook() {}

void SpellBook::learnSpell(ASpell* spell)
{
    if (spell)
    {
        spell_arr.insert(std::pair<std::string, ASpell*>(spell->getName(), spell->clone()));
    }
}


void SpellBook::forgetSpell(std::string const& name)
{
    std::map<std::string, ASpell*>::iterator it = spell_arr.find(name);
    if (it != spell_arr.end())
    {
        delete it->second;
        spell_arr.erase(name);
    }
}

ASpell* SpellBook::createSpell(std::string const& name)
{
    std::map<std::string, ASpell*>::iterator it = spell_arr.find(name);
    if (it != spell_arr.end())
    {
        return spell_arr[name];
    }
    return NULL;
}