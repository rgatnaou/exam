#include "ATarget.hpp"

ATarget::ATarget(std::string const &type )
{
	this->type = type;
}
ATarget::~ATarget()
{
		
}

void ATarget::getHitBySpell(const ASpell & spell) const
{
	std::cout << type << " has been " << spell.getEffects() << "!" <<std::endl;
}

std::string const &ATarget::getType() const
{
	return this->type;
}
