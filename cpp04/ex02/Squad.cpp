#include "Squad.hpp"

Squad::Squad() {}

Squad::~Squad() 
{
    for(int i = 0; i < count; i++)
        delete units[i];
    delete units;
}

int Squad::getCount() const { return (count); }

ISpaceMarine* Squad::getUnit(int N) const
{
    return (units[N]);
}

int Squad::push(ISpaceMarine* marine)
{
    ISpaceMarine** newSquad = new ISpaceMarine* [count + 1];
    for (int i = 0; i < count; i++)
    {
        newSquad[i] = units[i];
    }
    newSquad[count] = marine;
    delete[] units;
    units = newSquad;
    count++;
    return (count);
}