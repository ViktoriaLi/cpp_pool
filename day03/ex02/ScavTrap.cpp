// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ScavTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vlikhotk <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/22 16:48:18 by vlikhotk          #+#    #+#             //
//   Updated: 2018/06/22 16:48:20 by vlikhotk         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
  individuality = 3;
  this->hitPoints = 100;
  this->maxHitPoints = 100;
  this->energyPoints = 50;
  this->maxEnergyPoints = 50;
  this->level = 1;
  this->melAttackDam = 20;
  this->rangAttackDam = 15;
  this->armorDamRed = 3;
  std::cout << "ScavTrap Default constructor." << std::endl;
}

ScavTrap::ScavTrap(std::string usname) : ClapTrap()
{
  name = usname;
  individuality = 3;
  this->hitPoints = 100;
  this->maxHitPoints = 100;
  this->energyPoints = 50;
  this->maxEnergyPoints = 50;
  this->level = 1;
  this->melAttackDam = 20;
  this->rangAttackDam = 15;
  this->armorDamRed = 3;
  std::cout << "ScavTrap Name constructor" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & copy) : ClapTrap()
{
  std::cout << "ScavTrap Copy constructor." << std::endl;
  *this = copy;
}

ScavTrap::~ScavTrap()
{
  std::cout << "ScavTrap Destructor" << std::endl;
  return ;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & over)
{
  if (this != &over)
    this->name = over.name;
  return (*this);
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
