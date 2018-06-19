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

int main()
{
	Pony stack_pony("Stack");
	stack_pony.ponyOnTheStack();
	Pony *heap = new Pony("Heap");
	heap->ponyOnTheHeap();
	delete(heap);
}
