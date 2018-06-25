// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ScavTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vlikhotk <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/22 16:46:56 by vlikhotk          #+#    #+#             //
//   Updated: 2018/06/22 16:46:59 by vlikhotk         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
  individuality = 3;
  this->level = 1;
  this->hitPoints = 100;
  this->maxHitPoints = 100;
  this->energyPoints = 50;
  this->maxEnergyPoints = 50;
  this->level = 1;
  this->melAttackDam = 20;
  this->rangAttackDam = 15;
  this->armorDamRed = 3;
  std::cout << "Default daughter constructor." << std::endl;
}

ScavTrap::ScavTrap(std::string usname)
{
  name = usname;
  individuality = 8;
  this->hitPoints = 100;
  this->maxHitPoints = 100;
  this->energyPoints = 50;
  this->maxEnergyPoints = 50;
  this->level = 1;
  this->melAttackDam = 20;
  this->rangAttackDam = 15;
  this->armorDamRed = 3;
  std::cout << "Name daughter constructor" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & copy)
{
  std::cout << "Copy daughter constructor." << std::endl;
  *this = copy;
}

ScavTrap::~ScavTrap()
{
  std::cout << "Daughter Destructor" << std::endl;
  return ;
}

int ScavTrap::get_hitPoints()  const
{
  return (this->hitPoints);
}

int ScavTrap::get_maxHitPoints()  const
{
  return (this->maxHitPoints);
}

int ScavTrap::get_energyPoints()  const
{
  return (this->energyPoints);
}

int ScavTrap::get_maxEnergyPoints()  const
{
  return (this->maxEnergyPoints);
}

int ScavTrap::get_melAttackDam()  const
{
  return (this->melAttackDam);
}

int ScavTrap::get_rangAttackDam()  const
{
  return (this->rangAttackDam);
}

int ScavTrap::get_armorDamRed()  const
{
  return (this->armorDamRed);
}

std::string ScavTrap::get_name()  const
{
  return (this->name);
}

ScavTrap & ScavTrap::operator=(ScavTrap const & over)
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

void ScavTrap::rangedAttack(std::string const & target)
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

void ScavTrap::meleeAttack(std::string const & target)
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

void ScavTrap::takeDamage(unsigned int amount)
{
  if ((energyPoints - (int)amount - armorDamRed) >= 0)
    this->energyPoints = energyPoints - amount - armorDamRed;
  else
    this->energyPoints = 0;
}

void ScavTrap::beRepaired(unsigned int amount)
{
  if ((int)(energyPoints + amount) <= maxEnergyPoints)
    this->energyPoints += amount;
  else
    energyPoints = maxEnergyPoints;
}

void ScavTrap::challengeNewcomer()
{
  this->individuality--;
  const char *challenges[] = { "The Eat It or Wear It Challenge", "Try Not to Laugh",
  "The Whisper Challenge", "Speed Drawing", " Chubby Bunny", "Innuendo Bingo",
  "The Cinnamon Challenge", "Say Anything", "Bean Boozled Challenge"};
  std::srand(time(0));
  std::cout << "New random challange is: " << challenges[rand() % 9] << std::endl;
}
