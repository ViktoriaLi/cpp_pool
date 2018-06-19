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

Weapon::Weapon(std::string usname)
{
  setType(usname);
}

Weapon::~Weapon()
{

}

const std::string &Weapon::getType()
{
  const std::string &refer = type;
  return (refer);
}


void Weapon::setType(std::string usname)
{
  type = usname;
  
}
