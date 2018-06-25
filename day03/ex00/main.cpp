// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vlikhotk <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/22 13:30:12 by vlikhotk          #+#    #+#             //
//   Updated: 2018/06/22 13:30:16 by vlikhotk         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include "FragTrap.hpp"

int main(void)
{
  FragTrap Jack1("Jack");
  FragTrap Jack2(Jack1);
  FragTrap Jack3;
  Jack3 = Jack2;

  while (Jack1.level <= 2)
  {
    Jack1.rangedAttack("zombie");
    Jack1.meleeAttack("enemy");
    Jack1.vaulthunter_dot_exe("random enemy");
    Jack1.takeDamage(20);
  }
  while (Jack2.level <= 3)
  {
    Jack2.rangedAttack("zombie");
    Jack2.meleeAttack("enemy");
    Jack2.vaulthunter_dot_exe("random enemy");
    Jack2.takeDamage(20);
  }
  while (Jack3.level <= 4)
  {
    Jack3.rangedAttack("zombie");
    Jack3.meleeAttack("enemy");
    Jack3.vaulthunter_dot_exe("random enemy");
    Jack3.takeDamage(20);
  }
  return 0;
}
