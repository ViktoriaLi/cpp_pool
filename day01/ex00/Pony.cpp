#include <iostream>
#include "Pony.hpp"

Pony::Pony(std::string username)
{
	name = username;
}

Pony::~Pony()
{

}

void Pony::ponyOnTheStack()
{
   std::cout << "Hello! I am " << name << " pony!" << std::endl;
}

void Pony::ponyOnTheHeap()
{
   std::cout << "Hello! I am " << name << " pony!" << std::endl;
}
