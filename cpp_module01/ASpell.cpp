

#include "ASpell.hpp"

ASpell::ASpell()
{

}
ASpell::ASpell(std::string name , std::string effects):name(name),effects(effects)
{

}
ASpell::~ASpell()
{
		
}

ASpell::ASpell(const ASpell &other)
{
	*this = other; 
}

const ASpell& ASpell::operator=(const ASpell & other)
{
	if (this != &other)
	{
		this->name = other.getName();
		this->effects = other.getEffects();
	}
	return (*this);
}

std::string const& ASpell::getName() const
{
	return name;
}

std::string const& ASpell::getEffects() const
{
	return effects;
}

void ASpell::lunch(const ATarget & target) const
{
	target.getHitBySpell(*this);
}
