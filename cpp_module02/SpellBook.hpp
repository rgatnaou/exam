#pragma once
#include<iostream>
#include "ASpell.hpp"
#include<map>

class ASpell;


class SpellBook 
{
	private :
		std::map<std::string ,ASpell *> array;
		// SpellBook(const SpellBook &other);
		// const SpellBook &operator=(const SpellBook &other);
	public :
		~SpellBook();
		void learnSpell(ASpell* spell);
		void forgetSpell(std::string const & nameSpell);
		ASpell* createSpell(std::string const &nameSpell);

};