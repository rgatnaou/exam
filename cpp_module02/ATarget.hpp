
#pragma once

#include<iostream>
#include<string>
#include"ASpell.hpp"

class ASpell;

class ATarget
{
	private :
		std::string type;
	public :
		ATarget(std::string const &type);
		virtual ~ATarget();
		std::string const  &getType()const;
		virtual   ATarget *clone() const = 0;
		void getHitBySpell(const ASpell & spell)const;
};