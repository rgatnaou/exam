
#include "SpellBook.hpp"

SpellBook::~SpellBook()
{
}

void SpellBook::learnSpell(ASpell* spell)
{
	this->array[spell->getName()] = spell;
}

void SpellBook::forgetSpell(std::string const & nameSpell)
{
	array.erase(nameSpell);
}

ASpell* SpellBook::createSpell(std::string const &nameSpell)
{
	std::map<std::string ,ASpell *>::iterator it = array.find(nameSpell);
	if(it != array.end())
		return array[nameSpell];
	return NULL;
}

