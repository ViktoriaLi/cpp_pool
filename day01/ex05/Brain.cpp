// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Brain.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vlikhotk <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/19 13:23:38 by vlikhotk          #+#    #+#             //
//   Updated: 2018/06/19 13:23:40 by vlikhotk         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <cstdlib>
#include "Brain.hpp"
#include "Human.hpp"

Brain::Brain()
{
  size = 1;
  owner = "human";
}

Brain::~Brain()
{

}

std::string Brain::identify() const
{
  //int adr = this;
  //std::string adress = this;
  //char *adress1;
  //strtol(adress,    &adress1, 16);
  std::cerr << "New object at address " << this << std::endl;
  std::cout << "The number 42 in hex:     " << std::hex << &adress << '\n';
  return (adress);
}
