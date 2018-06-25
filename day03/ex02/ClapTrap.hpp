// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClapTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vlikhotk <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/22 16:48:08 by vlikhotk          #+#    #+#             //
//   Updated: 2018/06/22 16:48:10 by vlikhotk         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
  public:
    ClapTrap();
    ClapTrap(std::string usname);
    ClapTrap(ClapTrap const & copy);
    ~ClapTrap();
    ClapTrap & operator=(ClapTrap const & over);
    int level;
    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);
    void takeDamage(unsigned int amount);
  protected:
    int  hitPoints, maxHitPoints, energyPoints, maxEnergyPoints;
    std::string name;
    int melAttackDam, rangAttackDam, armorDamRed;
    void beRepaired(unsigned int amount);
    int get_hitPoints() const;
    int get_maxHitPoints() const;
    int get_energyPoints() const;
    int get_maxEnergyPoints() const;
    int get_melAttackDam() const;
    int get_rangAttackDam() const;
    int get_armorDamRed() const;
    std::string get_name() const;
};

#endif
