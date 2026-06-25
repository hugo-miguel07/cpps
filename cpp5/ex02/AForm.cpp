/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 17:07:56 by htavares          #+#    #+#             */
/*   Updated: 2026/06/25 15:15:02 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

AForm::AForm(void) : name(""), signStatus(false), gradeSign(0), gradeExec(0) {}

AForm::AForm(const std::string &name, int gradeSign, int gradeExec)
: name(name), signStatus(false), gradeSign(gradeSign), gradeExec(gradeExec)
{
	if (this->gradeSign < 1 || this->gradeExec < 1)
		throw GradeTooHighException();
	if (this->gradeSign > 150 || this->gradeExec > 150)
		throw GradeTooLowException();
}

AForm::~AForm() {}

AForm::AForm(const AForm &b)
: name(b.name), signStatus(b.signStatus), gradeSign(b.gradeSign), gradeExec(b.gradeExec)
{}

AForm &AForm::operator=(const AForm &b)
{
	if (this != &b)
	{
		this->signStatus = b.signStatus;
	}
	return (*this);
}

std::string	AForm::getName() const
{
	return (this->name);
}

bool AForm::getSignStatus() const
{
	return (this->signStatus);
}

int AForm::getGradeSign() const
{
	return (this->gradeSign);
}

int AForm::getGradeExec() const
{
	return (this->gradeExec);
}

bool AForm::beSigned(Bureaucrat &b)
{
	if (b.getGrade() <= this->gradeSign)	
		signStatus = true;
	return (b.getGrade() <= this->gradeSign);
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

std::ostream &operator<<(std::ostream &out, const AForm &f)
{
	out <<"Form " << f.getName() << ", Sign grade: " << f.getGradeSign()
		<< ", Execute Grade: " << f.getGradeExec();
	return (out);
}