/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 13:37:45 by htavares          #+#    #+#             */
/*   Updated: 2026/06/08 17:00:06 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog( void ) : AAnimal()
{
	std::cout << "Dog Default Constructor called" << std::endl;
	AAnimal::type = "Dog";
	this->brain = new Brain();
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called" << std::endl;
	delete this->brain;
}

Dog::Dog(const Dog &d) : AAnimal(d)
{
	std::cout << "Dog Copy Constructor called" << std::endl;
	this->brain = new Brain(*d.brain);
}

Dog& Dog::operator=(const Dog& d)
{
	if (this != &d)
	{
		AAnimal::operator=(d);
		*this->brain = *d.brain;
	}
	return (*this);
}

void Dog::makeSound( void ) const
{
	std::cout << "Woof Woof!" << std::endl;
}
