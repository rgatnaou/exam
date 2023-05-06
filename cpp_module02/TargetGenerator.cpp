#include "TargetGenerator.hpp"


TargetGenerator::~TargetGenerator()
{
}

void TargetGenerator::learnTargetType(ATarget* target)
{
    array[target->getType()] = target;
}

void TargetGenerator::forgetTargetType(std::string const &type)
{
    array.erase(type);
}

ATarget* TargetGenerator::createTarget(std::string const &type)
{
    std::map<std::string , ATarget * >::iterator it = array.find(type);
    if(it != array.end())
        return it->second->clone();
    return NULL;
}

TargetGenerator::TargetGenerator()
{
    
}
