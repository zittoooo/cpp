#include "Squad.hpp"

Squad::Squad()
{
    count = 0;
    units = 0;
}
Squad::Squad(const Squad& squad)
{
    count = squad.count;
    units = new ISpaceMarine * [squad.count];
    for(int i = 0; i < squad.count; i++)
    {
        units[i] = squad.units[i]->clone();
    }
}
Squad::~Squad() 
{
    for(int i = 0; i < count; i++)
        delete units[i];
    delete units;
}

Squad& Squad::operator= (const Squad& squad)
{
    if (units)
    {
        for(int i = 0; i < count; i++)
            delete units[i];
        delete units;
    }
    count = squad.count;
    units = new ISpaceMarine * [squad.count];
    for(int i = 0; i < squad.count; i++)
    {
        units[i] = squad.units[i]->clone();
    }
    return (*this);
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