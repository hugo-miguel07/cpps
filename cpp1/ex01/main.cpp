/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 17:45:16 by htavares          #+#    #+#             */
/*   Updated: 2026/04/14 14:43:14 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int hordeSize = 6;

	Zombie z1 = Zombie("joao");
	z1.announce();

	Zombie *zHorde = zombieHorde(hordeSize, "cristiano");

	for (int i = 0; i < hordeSize; i++)
	{
		zHorde[i].announce();
	}
	
	delete[] zHorde;
	
	return (0);
}
