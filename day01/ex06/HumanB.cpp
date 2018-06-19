// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanB.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vlikhotk <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/19 13:24:42 by vlikhotk          #+#    #+#             //
//   Updated: 2018/06/19 13:24:44 by vlikhotk         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

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
