#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP

#include <iostream>
#include "Zombie.hpp"

class ZombieEvent
{
	public:
	ZombieEvent();
	~ZombieEvent();
	void setZombieType(Zombie *new_zombie);
	Zombie* newZombie(std::string name);
	Zombie* randomChump();
};

#endif

