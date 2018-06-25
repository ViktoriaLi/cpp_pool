// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Zombie.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vlikhotk <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/19 13:21:56 by vlikhotk          #+#    #+#             //
//   Updated: 2018/06/19 13:22:00 by vlikhotk         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie()
{
	std::cout << "Zombie Constructor called" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie Destructor called" << std::endl;
}

void Zombie::announce()
{
	std::cout << "<" << name << " (" << type << ")> " << "Braiiiiiiinnnssss..." << std::endl;
}
