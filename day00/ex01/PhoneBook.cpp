# include <iostream>
# include <string>
# include <iomanip>
# include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{

}

PhoneBook::~PhoneBook()
{

}

void PhoneBook::add_contacts()
{
	  std::cout << "Enter first name" << std::endl;
    std::cin >> first_name;
    std::cout << "Enter last name" << std::endl;
    std::cin >> last_name;
    std::cout << "Enter nickname" << std::endl;
    std::cin >> nickname;
    std::cout << "Enter login" << std::endl;
    std::cin >> login;
    std::cout << "Enter postal address" << std::endl;
    std::cin >> postal_address;
    std::cout << "Enter email address" << std::endl;
    std::cin >> email_address;
    std::cout << "Enter phone number" << std::endl;
    std::cin >> phone_number;
    std::cout << "Enter birthday date" << std::endl;
    std::cin >> birthday_date;
    std::cout << "Enter favorite meal" << std::endl;
    std::cin >> favorite_meal;
    std::cout << "Enter underwear color" << std::endl;
    std::cin >> underwear_color;
    std::cout << "Enter darkest secret" << std::endl;
    std::cin >> darkest_secret;
}

void PhoneBook::show_contacts()
{
	make_formatting(first_name, 0);
	make_formatting(last_name, 0);
	make_formatting(nickname, 1);
}

void PhoneBook::make_formatting(std::string field, int ifend)
{
	int i;
	char tmp[11];

	i = 0;
	while (i < 9)
	{
		tmp[i] = field[i];
		i++;
	}
	tmp[i++] = '.';
	tmp[i++] = 0;
	std::cout << std::setw (10);
  	std::cout << tmp;
  	if (!ifend)
  		std::cout << '|';
  	else
  		std::cout << std::endl;
}

void PhoneBook::print_one_contact()
{
	std::cout << first_name << std::endl;
    std::cout << last_name << std::endl;
    std::cout << nickname << std::endl;
    std::cout << login << std::endl;
    std::cout << postal_address << std::endl;
    std::cout << email_address << std::endl;
    std::cout << phone_number << std::endl;
    std::cout << birthday_date << std::endl;
    std::cout << favorite_meal << std::endl;
    std::cout << underwear_color << std::endl;
    std::cout << darkest_secret << std::endl;
}
