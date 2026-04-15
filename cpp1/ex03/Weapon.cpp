/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 15:52:50 by htavares          #+#    #+#             */
/*   Updated: 2026/04/14 21:29:11 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(): type(""){}

Weapon::Weapon(std::string type) : type(type){}

Weapon::~Weapon()
{
	std::cout << "The weapon \"" << this->type << "\" was destroyed"
		<< std::endl;
}

std::string Weapon::getType() const
{
	return (this->type);
}

void Weapon::setType(std::string type)
{
	this->type = type;
}
