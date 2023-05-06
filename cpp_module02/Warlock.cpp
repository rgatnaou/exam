

#include "Warlock.hpp"

Warlock::Warlock(std::string const &name, std::string const &title)
{
	this->name = name;
	this->title = title;
	std::cout << name << ": This looks like another boring day." <<std::endl;
}

Warlock::~Warlock()
{
	std::cout << name << ": My job here is done!" << std::endl;
}

void Warlock::introduce() const
{
	std::cout << name << ": I am " <<  name << ", "<< title <<"!" <<std::endl;
}

std::string const &Warlock::getTitle() const
{
	return title;
}


std::string const &Warlock::getName() const
{
	return name;
}

void Warlock::setTitle(std::string const & title)
{
	this->title = title;
}

void Warlock::learnSpell(ASpell *spell)
{
	book.learnSpell(spell);
}

void Warlock::forgetSpell(std::string  nameSpell)
{
	book.forgetSpell(nameSpell);
}

void Warlock::launchSpell(std::string  nameSpell, ATarget const &target)
{
	ASpell *spell = book.createSpell(nameSpell);
	if(spell)
		spell->lunch(target);
}
