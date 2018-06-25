// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ex01.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vlikhotk <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/19 13:21:39 by vlikhotk          #+#    #+#             //
//   Updated: 2018/06/19 13:21:42 by vlikhotk         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>

void memoryLeak()
{
	std::string* panthere = new std::string("String panthere");
	std::cout << *panthere << std::endl;
	delete(panthere);
}

/*int main(void)
{
	memoryLeak();
	return (0);
}*/
