#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N)
{
	this->N = N;
	Zombie *child = new Zombie[N];

	delete[] child;
}

ZombieHorde::~ZombieHorde() {}
