// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vlikhotk <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/19 13:24:06 by vlikhotk          #+#    #+#             //
//   Updated: 2018/06/19 13:24:10 by vlikhotk         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include "Brain.hpp"
#include "Human.hpp"

int main(void)
{
  Human bob;
  std::cout << bob.identify() << std::endl;
  std::cout << bob.getBrain().identify() << std::endl;
}
