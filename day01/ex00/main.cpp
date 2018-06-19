// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vlikhotk <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/19 13:21:23 by vlikhotk          #+#    #+#             //
//   Updated: 2018/06/19 13:21:26 by vlikhotk         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Pony.hpp"

void ponyOnTheStack()
{
	Pony stack_pony("Stack", 2, "Scotland");
	std::cout << "Hello! I am " << stack_pony.name << " pony!" << std::endl;
	std::cout << "I am " << stack_pony.age << " years old." << std::endl;
	std::cout << "I am from " << stack_pony.country << "." << std::endl;
}

void ponyOnTheHeap()
{
	Pony *heap = new Pony("Heap", 3, "Iceland");
	std::cout << "Hello! I am " << heap->name << " pony!" << std::endl;
	std::cout << "I am " << heap->age << " years old." << std::endl;
	std::cout << "I am from " << heap->country << "." << std::endl;
	delete(heap);
}

int main(void)
{
	ponyOnTheHeap();
	ponyOnTheStack();
	return (0);
}
