/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 18:11:50 by htavares          #+#    #+#             */
/*   Updated: 2026/06/08 15:49:44 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain( void )
{
	std::cout << "Brain Default Constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "";
	this->ideaidx = 0;
}

Brain::~Brain()
{
	std::cout << "Brain Destructor called" << std::endl;
}

Brain::Brain(const Brain &b)
{
	std::cout << "Brain Copy Constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = b.ideas[i];
	this->ideaidx = b.ideaidx;
}

Brain& Brain::operator=(const Brain& b)
{
	if (this != &b)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = b.ideas[i];
		this->ideaidx = b.ideaidx;
	}
	return (*this);
}

std::string *Brain::getIdeas( void ) const
{
	return (const_cast<std::string *>(this->ideas));
}

void Brain::setIdea(std::string idea)
{
	this->ideaidx %= 100;
	this->ideas[this->ideaidx] = idea;
	this->ideaidx++;
}
