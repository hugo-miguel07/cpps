/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 15:04:10 by htavares          #+#    #+#             */
/*   Updated: 2026/04/30 16:31:54 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap Constructor called" << std::endl;
	this->name = name;
	this->hp = 10;
	this->ep = 10;
	this->ad = 0;
}

ClapTrap::ClapTrap( void )
{
	std::cout << "ClapTrap Default Constructor called" << std::endl;
	this->name = "Clappy";
	this->hp = 10;
	this->ep = 10;
	this->ad = 0;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &f)
{
	*this = f;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& f)
{
	if (this != &f)
	{
		this->name = f.name;
		this->hp = f.hp;
		this->ep = f.ep;
		this->ad = f.ad;
	}
	return (*this);
}

void ClapTrap::attack(const std::string& target)
{
	if (this->hp == 0)
	{
		std::cout << "ClapTrap " << this->name
			<< " is dead :(" << std::endl;
		return ;
	}
	if (this->ep > 0)
	{
		std::cout << "ClapTrap " << this->name
			<< " attacks " << target << ", causing "
			<< this->ad << " points of damage!" << std::endl;
		this->ep--;
	}
	else
	{
		std::cout << "ClapTrap " << this->name
			<< " has no energy left!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hp == 0)
	{
		std::cout << "ClapTrap " << this->name
			<< " is dead :(" << std::endl;
		return ;
	}
	if (this->hp <= amount)
	{
		std::cout << "ClapTrap " << this->name
			<< " takes " << amount << " of damage and dies :o"
			<< std::endl;
		this->hp = 0;
	}
	else
	{
		std::cout << "ClapTrap " << this->name
			<< " takes " << amount << " of damage!"
			<< std::endl;
		this->hp -= amount;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hp == 0)
	{
		std::cout << "ClapTrap " << this->name
			<< " is dead :(" << std::endl;
		return ;
	}
	if (this->ep > 0)
	{
		this->ep--;
		unsigned long sum = hp + amount;
		if (sum > CT_MAXHP)
		{
			std::cout << "ClapTrap " << this->name
			<< " repairs itself for " << (unsigned int)(CT_MAXHP - this->hp)
			<< " points of health!" << std::endl;
			this->hp = CT_MAXHP;
			return ;
		}
		std::cout << "ClapTrap " << this->name
			<< " repairs itself for " << amount
			<< " points of health!" << std::endl;
		this->hp += amount;
	}
	else
	{
		std::cout << "ClapTrap " << this->name
			<< " has no energy left!" << std::endl;
	}
}
