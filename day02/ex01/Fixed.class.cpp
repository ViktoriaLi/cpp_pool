// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.class.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vlikhotk <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/21 19:51:50 by vlikhotk          #+#    #+#             //
//   Updated: 2018/06/21 19:51:54 by vlikhotk         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include <fstream>
#include <cmath>
#include "Fixed.class.hpp"

int const Fixed::f = 8;

Fixed::Fixed() : n(0)
{
  std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & copy)
{
  std::cout << "Copy constructor called" << std::endl;
  *this = copy;
}

Fixed::Fixed(const int toConvert)
{
  std::cout << "Int constructor called" << std::endl;
  setRawBits(toConvert << f);
}

Fixed::Fixed(const float toConvert)
{
  std::cout << "Float constructor called" << std::endl;
  setRawBits(roundf(toConvert * (1 << f)));
}

float Fixed::toFloat(void) const
{
  float res = getRawBits();
  return (res / (1 << f));
}

int Fixed::toInt(void) const
{
  return getRawBits() >> f;
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
  return n;
}

void Fixed::setRawBits(int const m)
{
  n = m;
}

std::ostream & operator<<(std::ostream & o, Fixed const & over)
{
  o << over.toFloat();
  return o;
}
