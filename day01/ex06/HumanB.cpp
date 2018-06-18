#include <iostream>
#include "HumanB.hpp"

HumanB::HumanB(std::string user_name)
{
  name = user_name;
}

HumanB::~HumanB()
{

}

void HumanB::attack()
{
  std::cout << name << " attacks with his " << weap->type << std::endl;
}

void HumanB::setWeapon(Weapon us_weap)
{
  weap = &us_weap;;
}
