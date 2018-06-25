#include <iostream>
#include "Sorcerer.hpp"
#include "Victim.hpp"

Sorcerer::Sorcerer()
{
  setName();
  setTitle();
  title = "Title";
  std::cout << name << ", " << title << ", is born !" << std::endl;
}

Sorcerer::Sorcerer(std::string usname, std::string ustitle) : name(usname), title(ustitle)
{
  std::cout << name << ", " << title << ", is born !" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const & copy)
{
  *this = copy;
}

Sorcerer::~Sorcerer()
{
  std::cout << name << ", " << title << ", is dead. Consequences will never be the same !" << std::endl;
}

Sorcerer & Sorcerer::operator=(Sorcerer const & over)
{
  if (this != &over)
  {
    this->name = over.name;
    this->title = over.title;
  }
  return (*this);
}

void Sorcerer::polymorph(Victim const &vict) const
{
  vict.getPolymorphed();
}

std::ostream & operator<<(std::ostream & o, Sorcerer const & over)
{
  std::cout << "I am " << over.get_name() << ", " << over.get_title() << ", and I like ponies !" << std::endl;
  return o;
}

std::string Sorcerer::get_name() const
{
  return (this->name);
}

void Sorcerer::setName()
{
  name = get_name();
}

std::string Sorcerer::get_title() const
{
  return (this->title);
}

void Sorcerer::setTitle()
{
  title = get_title();
}
