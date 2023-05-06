
#pragma once

#include<iostream>
#include<string>
#include "ATarget.hpp"

class ATarget;

class ASpell
{
	protected :
		std::string name;
		std::string effects;
	public :
		ASpell();
		virtual ~ASpell();
		ASpell(const ASpell & other);
		ASpell(std::string name,std::string effects);
		const ASpell &operator=(const ASpell & other);
		
		std::string const  &getName()const;
		std::string const &getEffects()const;
		virtual ASpell *clone() const = 0;
		void lunch(const ATarget & target) const;
};