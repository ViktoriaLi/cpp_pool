#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP

#include <iostream>

class ZombieHorde
{
	public:
		ZombieHorde(int N);
		~ZombieHorde();
		std::string setZombieType();
		std::string setZombieName();
		Zombie *all;
};

#endif
