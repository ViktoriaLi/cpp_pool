#include <iostream>
#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle()
{
  name = "Plasma Rifle";
  action_points = 5;
  damage_points = 21;
}

PlasmaRifle::PlasmaRifle(std::string const & usname, int apcost, int damage)  : AWeapon(name, action_points, damage_points)
{

}

PlasmaRifle::PlasmaRifle(PlasmaRifle const & copy)
{
  *this = copy;
}

PlasmaRifle::~PlasmaRifle()
{

}

PlasmaRifle & PlasmaRifle::operator=(PlasmaRifle const & over)
{
  if (this != &over)
  {
    this->name = over.name;
    this->action_points = over.action_points;
    this->damage_points = over.damage_points;
  }
  return (*this);
}

void PlasmaRifle::attack()
{
  std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
/*std::string getName() const
{
  return this->name;
}
int getAPCost() const
{
  return this->action_points;
}
int getDamage() const
{
  return this->damage_points;
}*/
