

#pragma once

#include<iostream>
#include<string>


class Warlock
{
	private:
		std::string name;
		std::string title;
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

};