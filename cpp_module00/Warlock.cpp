

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