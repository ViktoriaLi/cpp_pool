#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
  public:
    HumanA(std::string user_name, Weapon weap1);
    ~HumanA();
    std::string name;
    Weapon *weap;
    void attack();
};

#endif
