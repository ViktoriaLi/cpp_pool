#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie{
	public:
		Zombie();
		~Zombie();
		std::string type, name;
		void announce();
};

#endif