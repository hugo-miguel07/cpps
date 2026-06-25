/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 14:17:44 by htavares          #+#    #+#             */
/*   Updated: 2026/06/25 14:51:13 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void)
: AForm("PresiPardonForm", 25, 5), target("defaultTarget")
{}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target)
{
		
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &b)
{
	
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &b)
{
	
}

bool PresidentialPardonForm::beSigned(Bureaucrat &b)
{
	
}

bool PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	
}
