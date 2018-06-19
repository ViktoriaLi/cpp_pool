// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vlikhotk <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/19 13:23:08 by vlikhotk          #+#    #+#             //
//   Updated: 2018/06/19 13:23:11 by vlikhotk         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int main(void)
{
	int i = 0;
	std::string n;

	std::cout << "Enter a number of Zombies" << std::endl;
	std::cin >> n;
	if (std::cin.fail())
		exit (0);
	if (n[0] >= 48 && n[0] <= 57)
	{
		ZombieHorde new_one((int)n);
		while (i < n)
			new_one.all[i++].announce();
	}
}
