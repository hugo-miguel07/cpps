/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 11:30:48 by htavares          #+#    #+#             */
/*   Updated: 2026/04/14 11:41:43 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
	int i;
	Zombie *zombieHorde = new Zombie[N];

	for (i = 0; i < N; i++)
	{
		zombieHorde[i].setName(name);
	}
}
