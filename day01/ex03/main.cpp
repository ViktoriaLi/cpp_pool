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
	int N = 0;
	char n[256];

	std::cout << "Enter a number of Zombies" << std::endl;
	std::cin >> n;
	if (std::cin.fail())
		exit (0);
	if (isdigit(n[0]))
	{
		N = atoi((const char *)n);
		ZombieHorde new_one(N);
		while (i < N)
			new_one.all[i++].announce();
	}
	else
	{
		N = 1 + rand() % 20;
		std::cout << "Random number of Zombie is: " << N << std::endl;
		ZombieHorde new_one(N);
		while (i < N)
			new_one.all[i++].announce();
	}
	return (0);
}
