#include <iostream>
#include "Weapon.hpp"

Weapon::Weapon(std::string usname)
{
  setType(usname);
}

Weapon::~Weapon()
{

}

const std::string &Weapon::getType()
{
  const std::string &refer = type;
  return (refer);
}


void Weapon::setType(std::string usname)
{
  type = usname;
  
}
