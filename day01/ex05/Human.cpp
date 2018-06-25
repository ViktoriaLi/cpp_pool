// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Brain.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vlikhotk <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/19 13:23:48 by vlikhotk          #+#    #+#             //
//   Updated: 2018/06/19 13:23:50 by vlikhotk         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include "Human.hpp"
#include "Brain.hpp"

Human::Human()
{
  std::cout << "Human Constructor called" << std::endl;
}

Human::~Human()
{
  std::cout << "Human Destructor called" << std::endl;
}

std::string Human::identify()
{
  return (br_elem.identify());
}

Brain const &Human::getBrain()
{
  return (br_elem);
}
