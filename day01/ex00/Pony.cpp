// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Pony.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vlikhotk <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/19 13:21:09 by vlikhotk          #+#    #+#             //
//   Updated: 2018/06/19 13:21:12 by vlikhotk         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include "Pony.hpp"

Pony::Pony(std::string username, int userage, std::string usercountry) : name(username),
age(userage), country(usercountry)
{
	std::cout << this->name << " Pony created!" << std::endl;
}

Pony::~Pony()
{
	std::cout << this->name << " Pony deleted!" << std::endl;
}
