#include "Pony.hpp"

void    ponyOnTheHeap()
{
    Pony *pony = new Pony("heap");
    delete pony;
}

void    ponyOnThestack()
{
    Pony pony("stack");
}

int main()
{
    ponyOnThestack();
    ponyOnTheHeap();
}
