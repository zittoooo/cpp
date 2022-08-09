#include "ATarget.hpp"

ATarget::ATarget() {}
ATarget::ATarget(std::string const& type)
{
    this->type = type;
}
ATarget::~ATarget() {}
ATarget::ATarget(ATarget const& target)
{
    this->type = target.type;
}
ATarget& ATarget::operator=(ATarget const& target)
{
    this->type = target.type;
    return *this;
}

std::string const& ATarget::getType() const
{
    return this->type;
}

void ATarget::getHitBySpell(ASpell const& spell) const
{
    std::cout << type << " has been " << spell.getEffects() << "!\n";
}