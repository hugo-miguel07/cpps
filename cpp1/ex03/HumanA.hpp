/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 15:56:11 by htavares          #+#    #+#             */
/*   Updated: 2026/04/15 12:55:47 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanA
{
	private:
	std::string name;
	Weapon &weapon;
	
	public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA();
	void attack() const;
	
};

#endif