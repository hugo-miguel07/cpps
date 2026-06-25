/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 14:17:44 by htavares          #+#    #+#             */
/*   Updated: 2026/06/25 15:19:49 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm(void)
: AForm("PresiPardonForm", 25, 5), target("defaultTarget")
{}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target)
: AForm("PresiPardonForm", 25, 5), target("target")
{}

PresidentialPardonForm::~PresidentialPardonForm()
{}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &b)
: AForm(b), target(b.target)
{}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &b)
{
	if (this != &b)
	{
		AForm::operator=(b);
		this->target = b.target;
	}
	return *this;
}

bool PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() <= this->getGradeSign())
		std::cout << this->target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
