
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
		ATarget();
		ATarget(std::string type);
		virtual ~ATarget();
		ATarget(const ATarget & other);
		std::string const  &getType()const;
		const ATarget &operator=(const ATarget & other);
		virtual   ATarget *clone() const = 0;
		void getHitBySpell(const ASpell & spell)const;
};