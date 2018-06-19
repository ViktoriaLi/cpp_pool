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
  Brain second;
}

Human::~Human()
{

}

std::string Human::identify()
{
  return (br_elem.identify());
}
