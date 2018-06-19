// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vlikhotk <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/19 13:20:05 by vlikhotk          #+#    #+#             //
//   Updated: 2018/06/19 13:20:07 by vlikhotk         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

# include <iostream>
# include <string>
# include <iomanip>
# include "PhoneBook.hpp"

void print_phonebook(int counter, PhoneBook *contacts)
{
  int i;

  i = 0;
  std::cout << std::setw (10);
  std::cout << "index";
  std::cout << '|';
  std::cout << std::setw (10);
  std::cout << "first name";
  std::cout << '|';
  std::cout << std::setw (10);
  std::cout << "last name";
  std::cout << '|';
  std::cout << std::setw (10);
  std::cout << "nickname" << std::endl;
  while (i < counter)
  {
    std::cout << std::setw (10);
    std::cout << i;
    std::cout << '|';
    contacts[i].show_contacts();
    i++;
  }
}

int main(void)
{
  std::string user_command;
  std::string index;
  PhoneBook contacts[8];
  int counter;

  counter = 0;
  while (user_command != "EXIT")
  {
    std::cout << "Enter ADD, SEARCH or EXIT command to create, use or exit your Phonebook" << std::endl;
    std::cin >> user_command;
    if (std::cin.fail())
			exit (0);
    if (user_command != "ADD" && user_command != "SEARCH" && user_command != "EXIT")
    {
      std::cout << "Incorrect command, try again!" << std::endl;
      continue ;
    }
    if (user_command == "ADD" && counter < 8)
    {
      contacts[counter].add_contacts();
      counter++;
    }
    if (user_command == "SEARCH")
    {
      print_phonebook(counter, contacts);
      std::cout << "Chose the number of contact to see more detailed info" << std::endl;
      std::cin >> index;
      if (std::cin.fail())
  			exit (0);
      if (index[0] >= 48 && index[0] < counter + 48)
        contacts[index[0] - 48].print_one_contact();
      else
        std::cout << "Incorrect number!" << std::endl;
      continue ;
    }
    else if (user_command == "ADD" && counter == 8)
       std::cout << "Phonebook is full! You cannot add contacts anymore. But you still can SEARCH AND EXIT!" << std::endl;
  }

}
