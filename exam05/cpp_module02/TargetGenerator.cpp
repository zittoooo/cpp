#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}
TargetGenerator::~TargetGenerator() {
    std::map<std::string, ATarget*>::iterator it = target_arr.begin();
    if (it != target_arr.end())
    {
        delete it->second;
        it++;
    }
    target_arr.clear();

}

void TargetGenerator::learnTargetType(ATarget* target) 
{
    if (target)
        target_arr.insert(std::pair<std::string, ATarget*>(target->getType(), target->clone()));
}

void TargetGenerator::forgetTargetTyep(std::string const& type)
{
    std::map<std::string, ATarget*>::iterator it = target_arr.find(type);
    if (it != target_arr.end())
    {
        delete it->second;
    }
    target_arr.erase(type);
}

ATarget* TargetGenerator::createTarget(std::string const& type)
{
    std::map<std::string, ATarget*>::iterator it = target_arr.find(type);
    if (it != target_arr.end())
        return target_arr[type];
    return NULL;
}