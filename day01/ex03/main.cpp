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
	int n;

	std::cout << "Enter a number of Zombies" << std::endl;
	std::cin >> n;
	ZombieHorde new_one(n);
	while (i < n)
		new_one.all[i++].announce();
}
