// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   FragTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vlikhotk <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/22 13:29:37 by vlikhotk          #+#    #+#             //
//   Updated: 2018/06/22 13:29:39 by vlikhotk         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
  public:
    FragTrap();
    FragTrap(std::string usname);
    FragTrap(FragTrap const & copy);
    ~FragTrap();
    FragTrap & operator=(FragTrap const & over);
    void vaulthunter_dot_exe(std::string const & target);
};

#endif
