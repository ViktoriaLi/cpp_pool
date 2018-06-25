// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.class.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vlikhotk <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/21 19:51:34 by vlikhotk          #+#    #+#             //
//   Updated: 2018/06/21 19:51:38 by vlikhotk         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef FIXED_CLASS_HPP
#define FIXED_CLASS_HPP

class Fixed
{
  private:
    int n;
    int static const f;
  public:
    Fixed();
    Fixed(Fixed const & copy);
    ~Fixed();

    Fixed & operator=(Fixed const & over);
    int getRawBits(void) const;
    void setRawBits(int const raw);
};

#endif
