/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 16:32:08 by htavares          #+#    #+#             */
/*   Updated: 2026/06/08 14:59:04 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap Constructor called" << std::endl;
	this->hp = 100;
	this->ep = 50;
	this->ad = 20;
}

ScavTrap::ScavTrap( void ) : ClapTrap()
{
	std::cout << "ScavTrap Default Constructor called" << std::endl;
	this->name = "Scavy";
	this->hp = 100;
	this->ep = 50;
	this->ad = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &f) : ClapTrap(f)
{
	std::cout << "ScavTrap Copy Constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& f)
{
	if (this != &f)
        ClapTrap::operator=(f);
    return *this;
}

void ScavTrap::attack(const std::string &target)
{
	if (this->getHp() == 0)
	{
		std::cout << "ScavTrap " << this->getName()
			<< " is dead :(" << std::endl;
		return ;
	}
	if (this->getEp() > 0)
	{
		std::cout << "ScavTrap " << this->getName()
			<< " attacks " << target << ", causing "
			<< this->getAd() << " points of damage!" << std::endl;
		this->ep = getEp() - 1;
	}
	else
	{
		std::cout << "ScavTrap " << this->getName()
			<< " has no energy left!" << std::endl;
	}
}

void ScavTrap::guardGate( void )
{
	std::cout << this->getName() << " is now in Gatekeeper mode" << std::endl;
}
