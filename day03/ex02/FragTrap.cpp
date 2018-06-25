// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   FragTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vlikhotk <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/22 13:29:30 by vlikhotk          #+#    #+#             //
//   Updated: 2018/06/22 13:29:33 by vlikhotk         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
  this->level = 1;
  this->hitPoints = 100;
  this->maxHitPoints = 100;
  this->energyPoints = 100;
  this->maxEnergyPoints = 100;
  this->melAttackDam = 30;
  this->rangAttackDam = 20;
  this->armorDamRed = 5;
  std::cout << "FragTrap Default constructor." << std::endl;
}

FragTrap::FragTrap(std::string usname) : ClapTrap()
{
  name = usname;
  this->level = 1;
  this->hitPoints = 100;
  this->maxHitPoints = 100;
  this->energyPoints = 100;
  this->maxEnergyPoints = 100;
  this->melAttackDam = 30;
  this->rangAttackDam = 20;
  this->armorDamRed = 5;
  std::cout << "FragTrap Name constructor" << std::endl;
}

FragTrap::FragTrap(FragTrap const & copy) : ClapTrap()
{
  std::cout << "FragTrap Copy constructor." << std::endl;
  *this = copy;
}

FragTrap::~FragTrap()
{
  std::cout << "FragTrap Destructor" << std::endl;
  return ;
}

FragTrap & FragTrap::operator=(FragTrap const & over)
{
  if (this != &over)
    this->name = over.name;
  return (*this);
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
  if (this->energyPoints >= 25)
  {
    const char *attacks[] = { "Sword", "Knive", "Kama", "Guandao", "Gun"};
    std::srand(time(0));
    std::cout << "FR4G-TP " << this->name << " attacks " << target << " with " << attacks[rand() % 5] << " at range, causing "
              << melAttackDam << " points of damage!" << std::endl;
    this->energyPoints -= 25;
  }
  else
  {
    beRepaired(50);
    std::cout << "Energy was repaired at 50 points!" << std::endl;
  }

}
