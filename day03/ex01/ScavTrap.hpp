// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ScavTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vlikhotk <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/22 16:47:08 by vlikhotk          #+#    #+#             //
//   Updated: 2018/06/22 16:47:10 by vlikhotk         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

class ScavTrap
{
  public:
    ScavTrap();
    ScavTrap(std::string usname);
    ScavTrap(ScavTrap const & copy);
    ~ScavTrap();
    int individuality;
    int level;
    ScavTrap & operator=(ScavTrap const & over);
    void challengeNewcomer();
    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);
    void takeDamage(unsigned int amount);
    void vaulthunter_dot_exe(std::string const & target);
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
