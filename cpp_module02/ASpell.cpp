

#include "ASpell.hpp"

ASpell::ASpell(std::string const &name , std::string const &effects)
{
	this->effects = effects;
	this->name = name;
}
ASpell::~ASpell()
{
}

std::string const& ASpell::getName() const
{
	return this->name;
}

std::string const& ASpell::getEffects() const
{
	return this->effects;
}

void ASpell::lunch(const ATarget & target) const
{
	target.getHitBySpell(*this);
}
