

#pragma once

#include<iostream>
#include<string>
#include<map>
#include"ASpell.hpp"
#include"ATarget.hpp"




class Warlock
{
	private:
		std::string name;
		std::string title;
		std::map< std::string,ASpell *> arr;
		Warlock(const  Warlock & other);
		Warlock();
		const Warlock &operator=(const  Warlock & other);
	public:
		Warlock(std::string const &name, std::string const &title);
		~Warlock();
		void introduce() const;
		std::string const &getName() const;
		std::string const &getTitle() const;
		void setTitle(std::string const &title);

		void learnSpell(ASpell *spell) ;
		void forgetSpell(std::string  nameSpell) ;
		void launchSpell(std::string  nameSpell, ATarget const &target) ;

};