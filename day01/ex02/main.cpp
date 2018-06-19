// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vlikhotk <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/19 13:22:24 by vlikhotk          #+#    #+#             //
//   Updated: 2018/06/19 13:22:26 by vlikhotk         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main()
{
	std::string name;
	ZombieEvent *event = NULL;

	std::cout << "Zombie with chosen name" << std::endl;
	std::cout << "Enter a zombie name" << std::endl;
	std::cin >> name;
	Zombie *first = event->newZombie(name);
	first->announce();
	delete first;
	std::cout << "Zombie with random name" << std::endl;
	Zombie *second = event->randomChump();
	second->announce();
	delete second;
}
