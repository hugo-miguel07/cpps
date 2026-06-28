/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 14:17:51 by htavares          #+#    #+#             */
/*   Updated: 2026/06/25 14:44:56 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <iostream>
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(void)
: AForm("PresiPardonForm", 72, 45), target("defaultTarget")
{}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
: AForm("PresiPardonForm", 72, 45), target(target)
{}

RobotomyRequestForm::~RobotomyRequestForm()
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &b)
: AForm(b), target(b.target)
{}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &b)
{
	if (this != &b)
	{
		AForm::operator=(b);
		this->target = b.target;
	}
	return *this;
}

bool RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (!getSignStatus())
		throw UnsignedFormException();
	if (executor.getGrade() > 45)
		throw GradeTooLowException();
	if (executor.getGrade() <= this->getGradeSign())
	{
		if (rand() <= RAND_MAX / 2)
			std::cout << this->target << " has been robotomized!" << std::endl;
		else
			std::cout << "Rootomy on " << this->target << " has failed :(" << std::endl;
		return (true);
	}
	return (false);
}
