// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Zombie.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vlikhotk <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/19 13:22:48 by vlikhotk          #+#    #+#             //
//   Updated: 2018/06/19 13:22:51 by vlikhotk         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie()
{

}

Zombie::~Zombie()
{

}

void Zombie::announce()
{
	std::cout << "<" << name << " (" << type << ")> " << "Braiiiiiiinnnssss..." << std::endl;
}
