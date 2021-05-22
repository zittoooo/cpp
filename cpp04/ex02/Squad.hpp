#ifndef SQUAD_HPP
#define SQUAD_HPP
#include "ISquad.hpp"
#include "stdlib.h"

class Squad : public ISquad
{
private:
    int count;
    ISpaceMarine** units;

public:
    Squad();
    Squad(const Squad& squad);
    ~Squad();
    Squad& operator= (const Squad& squad);
    int getCount() const;
    ISpaceMarine* getUnit(int) const;
    int push(ISpaceMarine* marine);
};




#endif