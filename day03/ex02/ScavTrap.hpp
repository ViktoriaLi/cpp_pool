// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ScavTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vlikhotk <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/22 16:48:24 by vlikhotk          #+#    #+#             //
//   Updated: 2018/06/22 16:48:26 by vlikhotk         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
  public:
    ScavTrap();
    ScavTrap(std::string usname);
    ScavTrap(ScavTrap const & copy);
    ~ScavTrap();
    int individuality;
    ScavTrap & operator=(ScavTrap const & over);
    void challengeNewcomer();
};

#endif
