// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Pony.hpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vlikhotk <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/19 13:21:15 by vlikhotk          #+#    #+#             //
//   Updated: 2018/06/19 13:21:18 by vlikhotk         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef PONY_HPP
#define PONY_HPP

# include <iostream>

class Pony {
  public:
    Pony(std::string username, int userage, std::string usercountry);
    ~Pony();
    std::string name;
    int age;
    std::string country;
};

#endif
