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

FragTrap::FragTrap() : hitPoints(100), maxHitPoints(100), energyPoints(100),
maxEnergyPoints(100), melAttackDam(30), rangAttackDam(20), armorDamRed(5)
{
  this->level = 1;
  std::cout << "Default constructor: Claptrap -- start bootup sequence." << std::endl;
}

FragTrap::FragTrap(std::string usname) : hitPoints(100), maxHitPoints(100), energyPoints(100),
maxEnergyPoints(100), melAttackDam(30), rangAttackDam(20), armorDamRed(5)
{
  name = usname;
  std::cout << "Name constructor: Ugh, friggin' hate that guy." << std::endl;
}

FragTrap::FragTrap(FragTrap const & copy)
{
  std::cout << "Copy constructor: Ahh -- one of my very first startup sequences! The memories..." << std::endl;
  *this = copy;
}

int FragTrap::get_hitPoints()  const
{
  return (this->hitPoints);
}

int FragTrap::get_maxHitPoints()  const
{
  return (this->maxHitPoints);
}

int FragTrap::get_energyPoints()  const
{
  return (this->energyPoints);
}

int FragTrap::get_maxEnergyPoints()  const
{
  return (this->maxEnergyPoints);
}

int FragTrap::get_melAttackDam()  const
{
  return (this->melAttackDam);
}

int FragTrap::get_rangAttackDam()  const
{
  return (this->rangAttackDam);
}

int FragTrap::get_armorDamRed()  const
{
  return (this->armorDamRed);
}

std::string FragTrap::get_name()  const
{
  return (this->name);
}

FragTrap::~FragTrap()
{
  std::cout << "Destructor: No no no no! Cancel directive three!" << std::endl;
  return ;
}

FragTrap & FragTrap::operator=(FragTrap const & over)
{
  this->hitPoints = over.get_hitPoints();
  this->maxHitPoints = over.get_maxHitPoints();
  this->energyPoints = over.get_energyPoints();
  this->maxEnergyPoints = over.get_maxEnergyPoints();
  this->melAttackDam = over.get_melAttackDam();
  this->rangAttackDam = over.get_rangAttackDam();
  this->armorDamRed = over.get_armorDamRed();
  this->name = over.get_name();
  return (*this);
}

void FragTrap::rangedAttack(std::string const & target)
{
  this->hitPoints = hitPoints - rangAttackDam;
  std::cout << "FR4G-TP " << this->name << " attacks " << target << " at range, causing "
            << rangAttackDam + armorDamRed << " points of damage!" << std::endl;
  if (hitPoints < 0)
  {
    this->hitPoints = maxHitPoints;
    this->level++;
    std::cout << "You reached a new " << level << " level!Congrats!" << std::endl;
  }
}

void FragTrap::meleeAttack(std::string const & target)
{
  this->hitPoints = hitPoints - melAttackDam;
  std::cout << "FR4G-TP " << this->name << " attacks " << target << " at range, causing "
            << melAttackDam << " points of damage!" << std::endl;
  if (hitPoints < 0)
  {
    this->hitPoints = maxHitPoints;
    this->level++;
    std::cout << "You reached a new " << level << " level!Congrats!" << std::endl;
  }
}

void FragTrap::takeDamage(unsigned int amount)
{
  if ((energyPoints - (int)amount - armorDamRed) >= 0)
    this->energyPoints = energyPoints - amount - armorDamRed;
  else
    this->energyPoints = 0;
}

void FragTrap::beRepaired(unsigned int amount)
{
  if ((int)(energyPoints + amount) <= maxEnergyPoints)
    this->energyPoints += amount;
  else
    energyPoints = maxEnergyPoints;
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
