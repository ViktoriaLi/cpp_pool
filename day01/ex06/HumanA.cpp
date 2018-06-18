#include <iostream>
#include "HumanA.hpp"

HumanA::HumanA(std::string user_name, Weapon weap1)
{
  name = user_name;
  weap = &weap1;
}

HumanA::~HumanA()
{

}

void HumanA::attack()
{
  std::cout << name << " attacks with his " << weap->type << std::endl;
}
