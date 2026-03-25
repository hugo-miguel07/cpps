/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 21:36:59 by htavares          #+#    #+#             */
/*   Updated: 2026/03/24 22:12:26 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>

class Contact
{
	private:
	std::string name;
	long number;

	public:
	Contact()
	{
		this->name = "";
		this->number = 0;
	}
	Contact(std::string name, long number)
	{
		this->name = name;
		this->number = number;
	}
};

class PhoneBook
{
	private:
	Contact contacts[8];
	int		contact_idx;

	public:
	PhoneBook()
	{
		this->contact_idx = 0;
	}
	void addContact(Contact *contact);
};

#endif
