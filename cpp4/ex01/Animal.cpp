/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 13:37:32 by htavares          #+#    #+#             */
/*   Updated: 2026/06/04 18:04:52 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal( void ) : type("")
{
	std::cout << "Animal Constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor called" << std::endl;
}

Animal::Animal(const Animal &a) : type(a.type)
{
	std::cout << "Animal Copy constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& a)
{
	if (this != &a)
		this->type = a.type;
	return (*this);
}

void Animal::makeSound( void ) const
{
	std::cout << "I'm not suppose to talk :(" << std::endl;
}

std::string Animal::getType( void ) const
{
	return (this->type);
}
