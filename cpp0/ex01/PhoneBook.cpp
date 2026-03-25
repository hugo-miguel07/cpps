/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 21:51:25 by htavares          #+#    #+#             */
/*   Updated: 2026/03/24 22:28:37 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

void PhoneBook::addContact(Contact *contact)
{
	this->contact_idx %= 8;
	this->contacts[this->contact_idx] = *contact;
}

int main(void)
{
	PhoneBook phonebook;
	std::string input;

	while(42)
	{
		std::cin >> input;
		if (input == "ADD")
		{
			
		}
		else if (input == "SEARCH")
		{
			
		}
		else if (input == "EXIT")
		{
			
		}
	}
	return (0);
}