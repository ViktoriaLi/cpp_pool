// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieHorde.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vlikhotk <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/19 13:22:56 by vlikhotk          #+#    #+#             //
//   Updated: 2018/06/19 13:22:58 by vlikhotk         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include <cstdlib>
#include "Zombie.hpp"
#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N)
{
	std::cout << "ZombieHorde Constructor called" << std::endl;
	int i = 0;

	ZombieHorde::all = new Zombie[N];
	while (i < N)
	{
		all[i].type = setZombieType();
		all[i].name = setZombieName();
		i++;
	}

}

ZombieHorde::~ZombieHorde()
{
	std::cout << "ZombieHorde Destructor called" << std::endl;
	delete [] all;
}

std::string ZombieHorde::setZombieType()
{

	char tmp_type[5];

	tmp_type[0] = 97 + rand() % 26;
	tmp_type[1] = 97 + rand() % 26;
	tmp_type[2] = 97 + rand() % 26;
	tmp_type[3] = 97 + rand() % 26;
	tmp_type[4] = '\0';

	return (tmp_type);
}

std::string ZombieHorde::setZombieName()
{
	char tmp_name[5];

	tmp_name[0] = 65 + rand() % 26;
	tmp_name[1] = 97 + rand() % 26;
	tmp_name[2] = 97 + rand() % 26;
	tmp_name[3] = 97 + rand() % 26;
	tmp_name[4] = '\0';

	return (tmp_name);
}
