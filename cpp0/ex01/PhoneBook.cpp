/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 21:51:25 by htavares          #+#    #+#             */
/*   Updated: 2026/03/25 13:16:18 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->contact_idx = 0;
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::addContact(Contact contact)
{
	this->contact_idx %= 8;
	this->contacts[this->contact_idx] = contact;
	this->contact_idx++;
}

std::string PhoneBook::parse_number(std::string number)
{
	int size;
	int i;

	size = number.length();
	if (size != 9)
		return ("invalid number!");
	i = 0;
	while (i < size)
	{
		if (!isdigit(number[i]))
			return ("invalid number!");
		i++;
	}
	return (number);
}

void PhoneBook::search_option(void) const
{
	std::cout << "Procura aí umas cenas" << std::endl;
}

void PhoneBook::add_option(void)
{
	std::string input;
	std::string number;
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string secret;
	
	std::cout << "number: ";
	getline(std::cin, input);
	number = parse_number(input);
	if (number == "invalid number!")
	{
		std::cout << number << std::endl << "\n";
		return ;
	}

	std::cout << "\nFirst Name: ";
	getline(std::cin, input);
	if (input.length() <= 0)
	{
		std::cout << "Invalid Name!" << std::endl << "\n";
		return ;
	}
	first_name = input;

	std::cout << "\nLast Name: ";
	getline(std::cin, input);
	if (input.length() <= 0)
	{
		std::cout << "Invalid Name!" << std::endl << "\n";
		return ;
	}
	last_name = input;

	std::cout << "\nNickame: ";
	getline(std::cin, input);
	if (input.length() <= 0)
	{
		std::cout << "Invalid Nickname!" << std::endl << "\n";
		return ;
	}
	nickname = input;

	std::cout << "\nDarkest Secret 🤫: ";
	getline(std::cin, input);
	if (input.length() <= 0)
	{
		std::cout << "Invalid Secret!" << std::endl << "\n";
		return ;
	}
	secret = input;
	this->addContact(Contact(first_name, last_name, nickname, number, secret));
}
