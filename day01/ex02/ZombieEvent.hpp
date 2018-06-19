// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieEvent.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vlikhotk <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/19 13:22:17 by vlikhotk          #+#    #+#             //
//   Updated: 2018/06/19 13:22:20 by vlikhotk         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP

#include <iostream>
#include "Zombie.hpp"

class ZombieEvent
{
	public:
	ZombieEvent();
	~ZombieEvent();
	void setZombieType(Zombie *new_zombie);
	Zombie* newZombie(std::string name);
	Zombie* randomChump();
};

#endif

