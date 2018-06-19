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

Pony::Pony(std::string username)
{
	name = username;
}

Pony::~Pony()
{

}

void Pony::ponyOnTheStack()
{
   std::cout << "Hello! I am " << name << " pony!" << std::endl;
}

void Pony::ponyOnTheHeap()
{
   std::cout << "Hello! I am " << name << " pony!" << std::endl;
}
