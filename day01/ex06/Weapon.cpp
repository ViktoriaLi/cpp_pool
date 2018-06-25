// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Weapon.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vlikhotk <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/19 13:25:01 by vlikhotk          #+#    #+#             //
//   Updated: 2018/06/19 13:25:04 by vlikhotk         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include "Weapon.hpp"

Weapon::Weapon(std::string usname) : type(usname)
{
  std::cout << "Weapon Constructor called" << std::endl;
}

Weapon::~Weapon()
{
  std::cout << "Weapon Destructor called" << std::endl;
}

const std::string &Weapon::getType()
{
  return (type);
}


void Weapon::setType(std::string usname)
{
  type = usname;
}
