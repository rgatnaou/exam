#pragma once
#include<iostream>
#include<map>
#include"ATarget.hpp"

class ATarget;

class TargetGenerator 
{
	private :
        std::map<std::string, ATarget *> array;
		TargetGenerator(const TargetGenerator &other);
		TargetGenerator &operator=(const TargetGenerator &other);
	public :
		TargetGenerator();
		virtual ~TargetGenerator();
        void learnTargetType(ATarget* target);
        void forgetTargetType(std::string const &type);
        ATarget* createTarget(std::string const &type);
};