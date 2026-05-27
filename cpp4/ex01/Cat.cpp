/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 13:36:41 by htavares          #+#    #+#             */
/*   Updated: 2026/05/27 14:51:51 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat( void ) : Animal()
{
	std::cout << "Cat Default Constructor called" << std::endl;
	Animal::type = "Cat";
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called" << std::endl;
}

Cat::Cat(const Cat &c) : Animal(c)
{
	std::cout << "Cat Copy Constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& c)
{
	if (this != &c)
		Animal::operator=(c);
	return (*this);
}

void Cat::makeSound( void ) const
{
	std::cout << "Meoooow!" << std::endl;
}
