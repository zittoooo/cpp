#pragma once
#include "ATarget.hpp"
#include <map>

class TargetGenerator
{
private:
    std::map<std::string, ATarget*> target_arr;
    TargetGenerator(TargetGenerator const & other);
    TargetGenerator& operator=(TargetGenerator & other);
public:
    TargetGenerator();
    ~TargetGenerator();

    void learnTargetType(ATarget*);
    void forgetTargetTyep(std::string const & type);
    ATarget* createTarget(std::string const& type);
};