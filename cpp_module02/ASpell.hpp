
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
		virtual ~ASpell();
		ASpell(std::string const &name,std::string const &effects);
		std::string const  &getName()const;
		std::string const &getEffects()const;
		virtual ASpell *clone() const = 0;
		void lunch(const ATarget & target) const;
};