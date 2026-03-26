/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 12:41:11 by htavares          #+#    #+#             */
/*   Updated: 2026/03/25 12:48:37 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Contact::Contact()
{
	this->first_name = "";
	this->last_name = "";
	this->nickname = "";
	this->number = "";
	this->secret = "";
}

Contact::~Contact()
{
}

Contact::Contact(std::string first_name, std::string last_name,
			std::string nickname, std::string number, std::string secret)
{
	this->first_name = first_name;
	this->last_name = last_name;
	this->nickname = nickname;
	this->number = number;
	this->secret = secret;
}

std::string Contact::getFirstName() const
{
	return (this->first_name);
}

std::string Contact::getLastName() const
{
	return (this->last_name);
}

std::string Contact::getNickname() const
{
	return (this->nickname);
}

std::string Contact::getNumber() const
{
	return (this->number);
}

std::string Contact::getSecret() const
{
	return (this->secret);
}
