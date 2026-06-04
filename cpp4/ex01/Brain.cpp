/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 18:11:50 by htavares          #+#    #+#             */
/*   Updated: 2026/06/04 18:34:27 by htavares         ###   ########.fr       */
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

Brain::Brain(const Brain &a)
{
	std::cout << "Brain Copy Constructor called" << std::endl;
}

Brain& Brain::operator=(const Brain& a)
{
	
}

std::string *Brain::getIdeas( void ) const
{
	return (NULL);
}

void Brain::setIdea(std::string idea)
{
	
}
