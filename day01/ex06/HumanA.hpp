// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanA.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vlikhotk <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/19 13:24:27 by vlikhotk          #+#    #+#             //
//   Updated: 2018/06/19 13:24:30 by vlikhotk         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
  public:
    HumanA(std::string user_name, Weapon &weap1);
    ~HumanA();
    std::string name;
    Weapon *weap;
    void attack();
};

#endif
