// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PhoneBook.hpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vlikhotk <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/19 13:19:55 by vlikhotk          #+#    #+#             //
//   Updated: 2018/06/19 13:19:58 by vlikhotk         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <iomanip>

class PhoneBook {
  public:
  	PhoneBook();
  	~PhoneBook();
    std::string first_name, last_name, nickname, login;
    std::string postal_address, email_address, phone_number;
    std::string birthday_date, favorite_meal, underwear_color, darkest_secret;
    void add_contacts();
    void show_contacts();
    void make_formatting(std::string field, int ifend);
    void print_one_contact();
};

#endif
