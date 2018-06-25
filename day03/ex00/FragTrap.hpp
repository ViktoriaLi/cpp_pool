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

class FragTrap
{
  private:
    int  hitPoints, maxHitPoints, energyPoints, maxEnergyPoints;
    std::string name;
    int melAttackDam, rangAttackDam, armorDamRed;
  public:
    FragTrap();
    FragTrap(std::string usname);
    FragTrap(FragTrap const & copy);
    ~FragTrap();
    int level;
    FragTrap & operator=(FragTrap const & over);
    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void vaulthunter_dot_exe(std::string const & target);

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
