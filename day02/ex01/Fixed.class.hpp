// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.class.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vlikhotk <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/21 19:51:43 by vlikhotk          #+#    #+#             //
//   Updated: 2018/06/21 19:51:46 by vlikhotk         ###   ########.fr       //
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
    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const;
};

std::ostream & operator<<(std::ostream &o, Fixed const &over);

#endif
