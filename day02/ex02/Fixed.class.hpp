// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.class.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vlikhotk <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/21 19:52:08 by vlikhotk          #+#    #+#             //
//   Updated: 2018/06/21 19:52:11 by vlikhotk         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef FIXED_CLASS_HPP
#define FIXED_CLASS_HPP

class Fixed
{
  private:
    int n;
    static int const f;
  public:
    Fixed();
    Fixed(Fixed const & copy);
    Fixed(const int toConvert);
    Fixed(const float toConvert);
    ~Fixed();
    Fixed & operator=(Fixed const & over);
    bool operator>(Fixed const & over) const;
    bool operator<(Fixed const & over) const;
    bool operator>=(Fixed const & over) const;
    bool operator<=(Fixed const & over) const;
    bool operator==(Fixed const & over) const;
    bool operator!=(Fixed const & over) const;
    Fixed operator+(Fixed const & over) const;
    Fixed operator-(Fixed const & over) const;
    Fixed operator*(Fixed const & over) const;
    Fixed operator/(Fixed const & over) const;
    Fixed & operator++();
    Fixed & operator++(int);
    Fixed & operator--();
    Fixed & operator--(int);
    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const;
    static Fixed &min(Fixed &n1, Fixed &n2);
    static Fixed &max(Fixed &n1, Fixed &n2);
    static const Fixed &min(Fixed const &n1, Fixed const &n2);
    static const Fixed &max(Fixed const &n1, Fixed const &n2);
};

std::ostream & operator<<(std::ostream &o, Fixed const &over);

#endif
