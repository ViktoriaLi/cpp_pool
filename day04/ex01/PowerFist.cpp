#include <iostream>
#include "AWeapon.hpp"
#include "PowerFist.hpp"

PowerFist::PowerFist()
{
  name = "Plasma Rifle";
  action_points = 8;
  damage_points = 50;
}

PowerFist::PowerFist(std::string const & usname, int apcost, int damage)  : AWeapon(name, action_points, damage_points)
{

}

PowerFist::PowerFist(PlasmaRifle const & copy)
{
  *this = copy;
}

PowerFist::~PowerFist()
{

}

PowerFist & PowerFist::operator=(PowerFist const & over)
{
  if (this != &over)
  {
    this->name = over.name;
    this->action_points = over.action_points;
    this->damage_points = over.damage_points;
  }
  return (*this);
}

void PowerFist::attack()
{
  std::cout << "* pschhh... SBAM! *" << std::endl;
}
