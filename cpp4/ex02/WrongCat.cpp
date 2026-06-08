/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 13:36:41 by htavares          #+#    #+#             */
/*   Updated: 2026/05/27 14:38:04 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat( void ) : WrongAnimal()
{
	std::cout << "WrongCat Default Constructor called" << std::endl;
	WrongAnimal::type = "Cat";
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &c) : WrongAnimal(c)
{
	std::cout << "WrongCat Copy Destructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& c)
{
	if (this != &c)
		WrongAnimal::operator=(c);
	return (*this);
}

void WrongCat::makeSound( void ) const
{
	std::cout << "Meoooow!" << std::endl;
}