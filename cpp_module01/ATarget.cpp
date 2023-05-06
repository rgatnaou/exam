#include "ATarget.hpp"

ATarget::ATarget()
{

}
ATarget::ATarget(std::string type ):type(type)
{

}
ATarget::~ATarget()
{
		
}

ATarget::ATarget(const ATarget &other)
{
	*this = other; 
}

const ATarget& ATarget::operator=(const ATarget & other)
{
	if (this != &other)
	{
		this->type = other.getType();
	}
	return (*this);
}

void ATarget::getHitBySpell(const ASpell & spell) const
{
	std::cout << type << " has been " << spell.getEffects() << "!" <<std::endl;
}

std::string const &ATarget::getType() const
{
	return type;
}
