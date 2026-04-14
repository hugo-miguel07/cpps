/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 17:45:16 by htavares          #+#    #+#             */
/*   Updated: 2026/04/14 14:24:57 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie z1 = Zombie("joao");
	z1.announce();

	Zombie *z2 = newZombie("miguel");
	z2->announce();
	
	randomChump("luis");

	delete z2;
	
	return (0);
}
