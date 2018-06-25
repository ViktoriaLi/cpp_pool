// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Weapon.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vlikhotk <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/19 13:25:08 by vlikhotk          #+#    #+#             //
//   Updated: 2018/06/19 13:25:10 by vlikhotk         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
  public:

    ~Weapon();
    std::string type;
    const std::string &getType();
    void setType(std::string usname);
    Weapon(std::string usname);
};

#endif
