/*
first name, last name, nickname, login, postal address, email address,
phone number, birthday date, favorite meal, underwear color and darkest secret.
*/

#include <iostream>
#include <string>

int main(void)
{
  std::string user_command;

  std::cout << "Enter ADD, SEARCH or EXIT command to create, use or exit your Phonebook" << std::endl;
  std::cin >> user_command;
  if (user_command != "ADD" && user_command != "SEARCH" && user_command != "EXIT")
  {
    std::cout << "Incorrect command, try again!" << std::endl;
    return (0);
  }
  if (user_command == "EXIT")
    return (0);
  if (user_command == "ADD")
  {
    PhoneBook new_book;

  }

}
