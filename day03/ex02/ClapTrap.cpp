// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClapTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vlikhotk <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/22 16:48:02 by vlikhotk          #+#    #+#             //
//   Updated: 2018/06/22 16:48:04 by vlikhotk         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : hitPoints(100), maxHitPoints(100), energyPoints(100),
maxEnergyPoints(100), melAttackDam(30), rangAttackDam(20), armorDamRed(5)
{
  this->level = 1;
  std::cout << "Claptrap Default constructor" << std::endl;
}

ClapTrap::ClapTrap(std::string usname) : hitPoints(100), maxHitPoints(100), energyPoints(100),
maxEnergyPoints(100), melAttackDam(30), rangAttackDam(20), armorDamRed(5)
{
  name = usname;
  std::cout << "Claptrap Name constructor" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & copy)
{
  std::cout << "Claptrap Copy constructor" << std::endl;
  *this = copy;
}

int ClapTrap::get_hitPoints()  const
{
  return (this->hitPoints);
}

int ClapTrap::get_maxHitPoints()  const
{
  return (this->maxHitPoints);
}

int ClapTrap::get_energyPoints()  const
{
  return (this->energyPoints);
}

int ClapTrap::get_maxEnergyPoints()  const
{
  return (this->maxEnergyPoints);
}

int ClapTrap::get_melAttackDam()  const
{
  return (this->melAttackDam);
}

int ClapTrap::get_rangAttackDam()  const
{
  return (this->rangAttackDam);
}

int ClapTrap::get_armorDamRed()  const
{
  return (this->armorDamRed);
}

std::string ClapTrap::get_name()  const
{
  return (this->name);
}

ClapTrap::~ClapTrap()
{
  std::cout << "Claptrap Destructor: No no no no! Cancel directive three!" << std::endl;
  return ;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & over)
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

void ClapTrap::rangedAttack(std::string const & target)
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

void ClapTrap::meleeAttack(std::string const & target)
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

void ClapTrap::takeDamage(unsigned int amount)
{
  if ((energyPoints - (int)amount - armorDamRed) >= 0)
    this->energyPoints = energyPoints - amount - armorDamRed;
  else
    this->energyPoints = 0;
}

void ClapTrap::beRepaired(unsigned int amount)
{
  if ((int)(energyPoints + amount) <= maxEnergyPoints)
    this->energyPoints += amount;
  else
    energyPoints = maxEnergyPoints;
}
