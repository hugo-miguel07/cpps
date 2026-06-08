/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 13:36:41 by htavares          #+#    #+#             */
/*   Updated: 2026/06/08 17:00:04 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat( void ) : AAnimal()
{
	std::cout << "Cat Default Constructor called" << std::endl;
	AAnimal::type = "Cat";
	this->brain = new Brain();
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called" << std::endl;
	delete this->brain;
}

Cat::Cat(const Cat &c) : AAnimal(c)
{
	std::cout << "Cat Copy Constructor called" << std::endl;
	this->brain = new Brain(*c.brain);
}

Cat& Cat::operator=(const Cat& c)
{
	if (this != &c)
	{
		AAnimal::operator=(c);
		*this->brain = *c.brain;
	}
	return (*this);
}

void Cat::makeSound( void ) const
{
	std::cout << "Meoooow!" << std::endl;
}
