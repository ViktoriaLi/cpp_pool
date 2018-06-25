#include <iostream>
#include "Victim.hpp"
#include "Peon.hpp"

Peon::Peon() : Victim()
{
  setName();
  std::cout << "Zog zog." << std::endl;
}

Peon::Peon(std::string usname) : Victim(usname)
{
  this->name = usname;
  std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon const & copy) : Victim()
{
  *this = copy;
}

Peon::~Peon()
{
  std::cout << "Bleuark..." << std::endl;
}

Peon & Peon::operator=(Peon const & over)
{
  if (this != &over)
  {
    this->name = over.name;
  }
  return (*this);
}

std::ostream & operator<<(std::ostream & o, Peon const & over)
{
  o << "I am " << over.get_name() << " and I like otters !" << std::endl;
  return o;
}

void Peon::getPolymorphed()
{
  std::cout << get_name() << " has been turned into a pink pony !" << std::endl;
}
