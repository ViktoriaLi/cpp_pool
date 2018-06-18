#include <iostream>
#include <cstdlib>
#include "Zombie.hpp"
#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N)
{
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