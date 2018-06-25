#include <iostream>
#include "Victim.hpp"

Victim::Victim()
{
  setName();
  std::cout << "Some random victim called " << name << " just popped !" << std::endl;
}

Victim::Victim(std::string usname) : name(usname)
{
  std::cout << "Some random victim called " << name << " just popped !" << std::endl;
}

Victim::Victim(Victim const & copy)
{
  *this = copy;
}

Victim::~Victim()
{
  std::cout << "Victim " << name << " just died for no apparent reason !" << std::endl;
}

Victim & Victim::operator=(Victim const & over)
{
  if (this != &over)
  {
    this->name = over.name;
  }
  return (*this);
}

std::ostream & operator<<(std::ostream & o, Victim const & over)
{
  o << "I am " << over.name << " and I like otters !" << std::endl;
  return o;
}

void Victim::getPolymorphed() const
{
  std::cout << this->name << " has been turned into a cute little sheep !" << std::endl;
}

std::string Victim::get_name() const
{
  return (this->name);
}

void Victim::setName()
{
  name = get_name();
}
