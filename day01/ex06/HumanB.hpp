// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanB.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vlikhotk <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/19 13:24:35 by vlikhotk          #+#    #+#             //
//   Updated: 2018/06/19 13:24:38 by vlikhotk         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
  public:
    HumanB(std::string user_name);
    ~HumanB();
    std::string name;
    Weapon *weap;
    void setWeapon(Weapon us_weap);
    void attack();
};

#endif
