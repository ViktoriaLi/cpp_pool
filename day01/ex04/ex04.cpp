// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ex04.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vlikhotk <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/19 13:23:21 by vlikhotk          #+#    #+#             //
//   Updated: 2018/06/19 13:23:25 by vlikhotk         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>

int main(void)
{
	std::string sub_str = "HI THIS IS BRAIN";

	std::string *point = &sub_str;

	std::string &refer = sub_str;

	std::cout << *point << std::endl;
	std::cout << refer << std::endl;
}
