// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.class.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vlikhotk <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/21 19:52:00 by vlikhotk          #+#    #+#             //
//   Updated: 2018/06/21 19:52:03 by vlikhotk         ###   ########.fr       //
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
  setRawBits(roundf(toConvert * (1 << this->f)));
}

float Fixed::toFloat(void) const
{
  float res = getRawBits();
  return (res / (1 << this->f));
}

int Fixed::toInt(void) const
{
  return getRawBits() >> this->f;
}

Fixed::~Fixed()
{
  std::cout << "Destructor called" << std::endl;
  return ;
}

int Fixed::getRawBits(void) const
{
  return this->n;
}

void Fixed::setRawBits(int const m)
{
  this->n = m;
}

std::ostream & operator<<(std::ostream & o, Fixed const & over)
{
  o << over.toFloat();
  return o;
}

Fixed & Fixed::operator=(Fixed const & over)
{
  std::cout << "Assignation operator called" << std::endl;
  if (this != &over)
    this->n = over.getRawBits();
  return (*this);
}

bool Fixed::operator>(Fixed const & over) const
{
  if (this->n > over.n)
    return (true);
  return (false);
}

bool Fixed::operator<(Fixed const & over) const
{
  if (this->n < over.n)
    return (true);
  return (false);
}

bool Fixed::operator>=(Fixed const & over) const
{
  if (this->n >= over.n)
    return (true);
  return (false);
}

bool Fixed::operator<=(Fixed const & over) const
{
  if (this->n <= over.n)
    return (true);
  return (false);
}

bool Fixed::operator==(Fixed const & over) const
{
  if (this->n == over.n)
    return (true);
  return (false);
}

bool Fixed::operator!=(Fixed const & over) const
{
  if (this->n != over.n)
    return (true);
  return (false);
}

Fixed Fixed::operator+(Fixed const & over) const
{
  return (Fixed(this->toFloat() + over.toFloat()));
}

Fixed Fixed::operator-(Fixed const & over) const
{
  return (Fixed(this->toFloat() - over.toFloat()));
}

Fixed Fixed::operator*(Fixed const & over) const
{
  return (Fixed(this->toFloat() * over.toFloat()));
}

Fixed Fixed::operator/(Fixed const & over) const
{
  return (Fixed(this->toFloat() / over.toFloat()));
}

Fixed & Fixed::min(Fixed &f1, Fixed &f2)
{
  if (f1.n <= f2.n)
    return (f1);
  return (f2);
}

Fixed & Fixed::max(Fixed &f1, Fixed &f2)
{
  if (f1.n >= f2.n)
    return (f1);
  return (f2);
}

const Fixed &Fixed::min(Fixed const &f1, Fixed const &f2)
{
  if (f1.n <= f2.n)
    return (f1);
  return (f2);
}

const Fixed &Fixed::max(Fixed const &f1, Fixed const &f2)
{
  if (f1.n >= f2.n)
    return (f1);
  return (f2);
}

Fixed & Fixed::operator++()
{
  this->n++;
  return (*this);
}

Fixed & Fixed::operator++(int)
{
  Fixed *tmp = new Fixed(*this);
  operator++();
  return (*tmp);
}

Fixed & Fixed::operator--()
{
  this->n--;
  return (*this);
}

Fixed & Fixed::operator--(int)
{
  Fixed *tmp = new Fixed(*this);
  operator--();
  return (*tmp);
}
