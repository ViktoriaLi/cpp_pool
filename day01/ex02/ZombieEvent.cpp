// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieEvent.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vlikhotk <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/19 13:22:11 by vlikhotk          #+#    #+#             //
//   Updated: 2018/06/19 13:22:14 by vlikhotk         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include <cstdlib>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
	std::cout << "ZombieEvent Constructor called" << std::endl;
}

ZombieEvent::~ZombieEvent()
{
	std::cout << "ZombieEvent Destructor called" << std::endl;
}

void ZombieEvent::setZombieType(Zombie *new_zombie)
{
	std::cout << "Enter a zombie type" << std::endl;
	std::cin >> new_zombie->type;
	if (std::cin.fail())
		exit (0);
}

Zombie* ZombieEvent::newZombie(std::string name)
{
	Zombie *new_zombie = new Zombie;
	setZombieType(new_zombie);
	new_zombie->name = name;
	return (new_zombie);
}

Zombie* ZombieEvent::randomChump()
{
	char tmp_name[5];
	char tmp_type[5];
	Zombie *new_zombie = new Zombie;

	tmp_name[0] = 65 + rand() % 26;
	tmp_name[1] = 97 + rand() % 26;
	tmp_name[2] = 97 + rand() % 26;
	tmp_name[3] = 97 + rand() % 26;
	tmp_name[4] = '\0';
	new_zombie->name = tmp_name;
	tmp_type[0] = 97 + rand() % 26;
	tmp_type[1] = 97 + rand() % 26;
	tmp_type[2] = 97 + rand() % 26;
	tmp_type[3] = 97 + rand() % 26;
	tmp_type[4] = '\0';
	new_zombie->type = tmp_type;
	return (new_zombie);
}
