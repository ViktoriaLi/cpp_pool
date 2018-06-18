#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie()
{

}

Zombie::~Zombie()
{

}

void Zombie::announce()
{
	std::cout << "<" << name << " (" << type << ")> " << "Braiiiiiiinnnssss..." << std::endl;
}