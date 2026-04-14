/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 15:56:11 by htavares          #+#    #+#             */
/*   Updated: 2026/04/14 16:27:05 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA
{
	private:
	std::string name;
	Weapon weapon;
	
	public:
	HumanA(Weapon weapon, std::string name);
	void attack();
	
};
