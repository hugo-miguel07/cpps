/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 15:54:08 by htavares          #+#    #+#             */
/*   Updated: 2026/04/15 13:12:31 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon){}

HumanA::~HumanA(void)
{
	/*std::cout << "Human \"" << this->name << "\" was destroyed"
		<< std::endl;*/
}

void	HumanA::attack(void) const
{
	std::cout << this->name << " attacks with their "
		<< this->weapon.getType() << std::endl;
}
