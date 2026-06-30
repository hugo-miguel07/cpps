/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 14:17:51 by htavares          #+#    #+#             */
/*   Updated: 2026/06/30 12:42:17 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm(void)
: AForm("RoboRequestForm", 72, 45), target("defaultTarget")
{}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
: AForm("RoboRequestForm", 72, 45), target(target)
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
	std::srand(std::time(0));
	if (!getSignStatus())
		throw UnsignedFormException();
	if (executor.getGrade() > 45)
		throw GradeTooLowException();
	if (executor.getGrade() <= this->getGradeSign())
	{
		if (std::rand() % 2)
			std::cout << this->target << " has been robotomized!" << std::endl;
		else
			std::cout << "Robotomy on " << this->target << " has failed :(" << std::endl;
		return (true);
	}
	return (false);
}
