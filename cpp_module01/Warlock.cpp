

#include "Warlock.hpp"

Warlock::Warlock(std::string const &name, std::string const &title):name(name),title(title)
{
	std::cout << name << ": This looks like another boring day." <<std::endl;
}

Warlock::Warlock(const  Warlock & other)
{
	*this = other;
}

Warlock::~Warlock()
{
	std::cout << name << ": My job here is done!" << std::endl;
	std::map<std::string,ASpell *>::iterator beg = arr.begin(); 
	std::map<std::string,ASpell *>::iterator en = arr.end();
	while(beg != en)
	{
		arr.erase(beg++);
	}
	arr.clear();
}

void Warlock::introduce() const
{
	std::cout << name << ": I am " <<  name << ", "<< title <<"!" <<std::endl;
}

const Warlock& Warlock::operator=(const  Warlock & other)
{
	if (this != &other)
	{
		this->name = other.getName();
		this->title = other.getTitle();
	}
	return(*this);
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
	if(spell)
		arr[spell->getName()] = spell->clone();
}

void Warlock::forgetSpell(std::string  nameSpell)
{
	std::map<std::string, ASpell *>::iterator it = arr.find(nameSpell);
	if (it != arr.end())
	{
		delete arr[nameSpell];
		arr.erase(it);
	}
}

void Warlock::launchSpell(std::string  nameSpell, ATarget const &target)
{
	std::map<std::string, ASpell *>::iterator it = arr.find(nameSpell);
	if (it != arr.end())
	{
		arr[nameSpell]->lunch(target);
	}
}
