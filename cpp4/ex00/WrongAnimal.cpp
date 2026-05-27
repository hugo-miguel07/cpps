/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 13:37:32 by htavares          #+#    #+#             */
/*   Updated: 2026/05/27 14:38:26 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal( void ) : type("")
{
	std::cout << "WrongAnimal Constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &a) : type(a.type)
{
	std::cout << "WrongAnimal Copy constructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& a)
{
	if (this != &a)
		this->type = a.type;
	return (*this);
}

void WrongAnimal::makeSound( void ) const
{
	std::cout << "I'm not suppose to talk :(" << std::endl;
}

std::string WrongAnimal::getType( void ) const
{
	return (this->type);
}
