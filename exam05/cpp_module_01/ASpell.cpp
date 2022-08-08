#include "ASpell.hpp"

ASpell::ASpell() {}
ASpell::~ASpell() {}
ASpell::ASpell(ASpell const& aspell)
{
    this-> name = aspell.name;
    this->effects = aspell.effects;
}

ASpell::ASpell(std::string name, std::string effects)
{
    this->name = name;
    this->effects = effects;
}

ASpell& ASpell::operator=(ASpell const& aspell)
{
    this->name = aspell.name;
    this->effects = aspell.effects;
    return *this;
}

std::string ASpell::getName() const
{
    return name;
}
std::string ASpell::getEffects() const
{
    return effects;
}

void ASpell::launch(ATarget const& target) const
{
    target.getHitBySpell((*this));
}