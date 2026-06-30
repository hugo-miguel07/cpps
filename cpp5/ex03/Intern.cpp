/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 12:50:01 by htavares          #+#    #+#             */
/*   Updated: 2026/06/30 13:36:21 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShruberryCreationForm.hpp"
#include <iostream>

Intern::Intern()
{}
Intern::~Intern()
{}
Intern::Intern(const Intern &i)
{
	(void)i;
}
Intern &Intern::operator=(const Intern &i)
{
	(void)i;
	return (*this);
}

AForm *Intern::makeForm(std::string form, std::string target)
{
	int i = 0;
	std::string names[] = {"presidential request"
		, "robotomy request", "shruberry request"};
	while (i < 3 && names[i] != form)
		i++;
	switch (i)
	{
		case (0):
			std::cout << "Intern creates " << names[i] << std::endl;
			return (new PresidentialPardonForm(target));
		case (1):
			std::cout << "Intern creates " << names[i] << std::endl;
			return (new PresidentialPardonForm(target));
		case (2):
			std::cout << "Intern creates " << names[i] << std::endl;
			return (new PresidentialPardonForm(target));
		default :
			throw FormDoesntExistException();
	}
	return (NULL);
}

const char *Intern::FormDoesntExistException::what() const throw()
{
	return ("Form does not exist!");
}
