/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 17:45:16 by htavares          #+#    #+#             */
/*   Updated: 2026/04/14 11:28:54 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie z1 = Zombie("joao");
	Zombie z2 = Zombie("miguel");

	z1.announce();
	z2.announce();
	
	
	return (0);
}
