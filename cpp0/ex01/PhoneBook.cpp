/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 21:51:25 by htavares          #+#    #+#             */
/*   Updated: 2026/03/26 12:22:48 by htavares         ###   ########.fr       */
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

std::string PhoneBook::formatColumn(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

void PhoneBook::search_option(void) const
{
	int index;
	std::string input;

	std::cout << "\n" << std::setw(45) << std::setfill('-') << "" << std::endl;
	std::cout << std::setfill(' ')
		<< "|" << std::setw(10) << "INDEX"
		<< "|" << std::setw(10) << "FIRST NAME"
		<< "|" << std::setw(10) << "LAST NAME"
		<< "|" << std::setw(10) << "NICKNAME"
		<< "|" << std::endl;
	std::cout << std::setw(45) << std::setfill('-') << "" << std::endl;

	for (int i = 0; i < 8; i++)
	{
		if (this->contacts[i].getFirstName().length() == 0)
			continue;
		std::cout << std::setfill(' ')
			<< "|" << std::setw(10) << i
			<< "|" << std::setw(10) << formatColumn(this->contacts[i].getFirstName())
			<< "|" << std::setw(10) << formatColumn(this->contacts[i].getLastName())
			<< "|" << std::setw(10) << formatColumn(this->contacts[i].getNickname())
			<< "|" << std::endl;
	}
	std::cout << std::setw(45) << std::setfill('-') << "" << std::endl;
	std::cout << "\nIndex to display details: ";
	getline(std::cin, input);
	if (input.length() != 1 || !isdigit(input[0]))
	{
		std::cout << "Invalid index!" << std::endl;
		return ;
	}
	index = atoi(input.c_str());
	if (index < 0 || index > 7 || this->contacts[index].getFirstName().length() == 0)
	{
		std::cout << "Invalid index!" << std::endl;
		return ;
	}
	std::cout << "\nFirst Name: " << this->contacts[index].getFirstName() << std::endl;
	std::cout << "Last Name: " << this->contacts[index].getLastName() << std::endl;
	std::cout << "Nickname: " << this->contacts[index].getNickname() << std::endl;
	std::cout << "Number: " << this->contacts[index].getNumber() << std::endl;
	std::cout << "Darkest Secret: " << this->contacts[index].getSecret() << std::endl;
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
