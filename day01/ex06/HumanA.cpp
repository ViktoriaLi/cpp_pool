// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanA.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vlikhotk <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/19 13:24:49 by vlikhotk          #+#    #+#             //
//   Updated: 2018/06/19 13:24:51 by vlikhotk         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include "HumanA.hpp"

HumanA::HumanA(std::string user_name, Weapon &weap1)
{
  std::cout << "HumanA Constructor called" << std::endl;
  name = user_name;
  weap = &weap1;
}

HumanA::~HumanA()
{
  std::cout << "HumanA Destructor called" << std::endl;
}

void HumanA::attack()
{
  std::cout << name << " attacks with his " << weap->getType() << std::endl;
}
