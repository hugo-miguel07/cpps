/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 17:45:55 by htavares          #+#    #+#             */
/*   Updated: 2026/04/14 20:55:37 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
#include <iostream>

class Zombie
{
	private:
	std::string name;
	
	public:
	Zombie();
	Zombie(std::string name);
	~Zombie();
	void announce(void);
	void setName(std::string name);
};

Zombie	*zombieHorde(int N, std::string name);

#endif
