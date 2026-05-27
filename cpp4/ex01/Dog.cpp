/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 13:37:45 by htavares          #+#    #+#             */
/*   Updated: 2026/05/27 14:52:01 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog( void ) : Animal()
{
	std::cout << "Dog Default Constructor called" << std::endl;
	Animal::type = "Dog";
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called" << std::endl;
}

Dog::Dog(const Dog &d) : Animal(d)
{
	std::cout << "Dog Copy Constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& d)
{
	if (this != &d)
		Animal::operator=(d);
	return (*this);
}

void Dog::makeSound( void ) const
{
	std::cout << "Woof Woof!" << std::endl;
}
