/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcolino <cmarcolino@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 15:04:15 by htavares          #+#    #+#             */
/*   Updated: 2026/05/02 13:58:09 by cmarcolino       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void )
{
	ClapTrap ct;
	ClapTrap ct2("Goncalo");

	ct.attack("Normal Enemy");

	ct2.attack("Crazy Enemy");

	ct.takeDamage(4);

	ct.beRepaired(3);
	ct.beRepaired(4);

	for (int i = 0; i <= 7; i++)
	{
		ct.attack("Dummy");
	}

	return (0);	
}

