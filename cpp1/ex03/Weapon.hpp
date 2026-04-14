/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 15:52:33 by htavares          #+#    #+#             */
/*   Updated: 2026/04/14 16:17:55 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Weapon
{
	private:
	std::string type;
	
	public:
	Weapon();
	Weapon(std::string type);
	~Weapon();
	std::string getType() const;
	void setType(std::string type);
};
