#include <iostream>
#include "AWeapon.hpp"

AWeapon::AWeapon()
{

}

AWeapon::AWeapon(std::string const & usname, int apcost, int damage)
{
  name = usname;
  action_points = apcost;
  damage_points = damage;
}

AWeapon::AWeapon(AWeapon const & copy)
{
  *this = copy;
}

AWeapon::~AWeapon()
{

}

AWeapon & AWeapon::operator=(AWeapon const & over)
{
  if (this != &over)
  {
    this->name = over.name;
    this->action_points = over.action_points;
    this->damage_points = over.damage_points;
  }
  return (*this);
}

std::string AWeapon::getName() const
{
  return this->name;
}

int AWeapon::getAPCost() const
{
  return this->action_points;
}

int AWeapon::getDamage() const
{
  return this->damage_points;
}
