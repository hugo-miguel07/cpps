/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 15:54:35 by htavares          #+#    #+#             */
/*   Updated: 2026/04/15 13:12:17 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(NULL){}

HumanB::~HumanB(void)
{
	/*std::cout << "Human \"" << this->name << "\" was destroyed"
		<< std::endl;*/
}

void	HumanB::attack(void) const
{
	if (!weapon)
	{
		std::cout << this->name << " has no weapon :( "
			<< std::endl;
		return ;
	}
		std::cout << this->name << " attacks with their "
			<< this->weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}
