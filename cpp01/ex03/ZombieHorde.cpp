#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N)
{
	this->N = N;
	child = new Zombie[N];
	std::string name[10] = {
        "ABC",
        "DEF",
        "EFG",
        "HIJ",
        "123",
        "234",
        "345",
        "456",
        "567",
        "678"
    };
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dis(0, 9);
	for (int i = 0; i < N; i++)
		new(&child[i]) Zombie(name[dis(gen)], "child");
}

ZombieHorde::~ZombieHorde() {

	delete[] child;
}

void ZombieHorde::announce()
{
	for (int i = 0; i < N; i++)
		child[i].announce();
}