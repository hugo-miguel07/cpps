/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 21:36:59 by htavares          #+#    #+#             */
/*   Updated: 2026/03/26 12:23:07 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <cstdlib>

class Contact
{
	private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string number;
	std::string secret;

	public:
	Contact();
	Contact(std::string first_name, std::string last_name,
				std::string nickname, std::string number, std::string secret);
	~Contact();
	std::string getFirstName() const;
	std::string getLastName() const;
	std::string getNickname() const;
	std::string getNumber() const;
	std::string getSecret() const;
};

class PhoneBook
{
	private:
	Contact contacts[8];
	int		contact_idx;

	public:
	PhoneBook();
	~PhoneBook();
	void addContact(Contact contact);
	void add_option();
	void search_option() const;
	static std::string parse_number(std::string number);
	static std::string formatColumn(std::string str);
};

#endif
