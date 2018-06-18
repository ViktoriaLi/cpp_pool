#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
  public:
    HumanB(std::string user_name);
    ~HumanB();
    std::string name;
    Weapon *weap;
    void setWeapon(Weapon us_weap);
    void attack();
};

#endif
