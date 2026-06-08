/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 13:37:32 by htavares          #+#    #+#             */
/*   Updated: 2026/06/08 15:56:33 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

AAnimal::AAnimal( void ) : type("")
{
	std::cout << "Animal Constructor called" << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "Animal Destructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &a) : type(a.type)
{
	std::cout << "Animal Copy constructor called" << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& a)
{
	if (this != &a)
		this->type = a.type;
	return (*this);
}

std::string AAnimal::getType( void ) const
{
	return (this->type);
}
