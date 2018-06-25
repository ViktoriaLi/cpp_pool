// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.class.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vlikhotk <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/21 19:51:23 by vlikhotk          #+#    #+#             //
//   Updated: 2018/06/21 19:51:30 by vlikhotk         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include "Fixed.class.hpp"

Fixed::Fixed() : n(0)
{
  std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & copy)
{
  std::cout << "Copy constructor called" << std::endl;
  *this = copy;
}


Fixed::~Fixed()
{
  std::cout << "Destructor called" << std::endl;
  return ;
}

Fixed & Fixed::operator=(Fixed const & over)
{
  std::cout << "Assignation operator called" << std::endl;
  if (this != &over)
    this->n = over.getRawBits();
  return (*this);
}

int Fixed::getRawBits(void) const
{
  std::cout << "getRawBits member function called" << std::endl;
  return this->n;
}
