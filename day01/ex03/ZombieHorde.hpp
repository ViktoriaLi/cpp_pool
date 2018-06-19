// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieHorde.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vlikhotk <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/19 13:23:01 by vlikhotk          #+#    #+#             //
//   Updated: 2018/06/19 13:23:03 by vlikhotk         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP

#include <iostream>

class ZombieHorde
{
	public:
		ZombieHorde(int N);
		~ZombieHorde();
		std::string setZombieType();
		std::string setZombieName();
		Zombie *all;
};

#endif
