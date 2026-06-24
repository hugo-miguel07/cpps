/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 17:07:56 by htavares          #+#    #+#             */
/*   Updated: 2026/06/24 17:48:08 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include <iostream>

Form::Form(void) : name(""), signStatus(false), gradeSign(0), gradeExec(0) {}

Form::Form(const std::string &name, bool signStatus, int gradeSign, int gradeExec)
: name(""), signStatus(false), gradeSign(gradeSign), gradeExec(gradeExec)
{}

Form::~Form() {}

Form::Form(const Form &b)
: name(b.name), signStatus(b.signStatus), gradeSign(b.gradeSign), gradeExec(b.gradeExec)
{}

Form &Form::operator=(const Form &b)
{
}

std::string	Form::getName() const
{
	return (this->name);
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

std::ostream &operator<<(std::ostream &out, const Form &f)
{
	//out << b.getName() << ", Form grade " << f.getGrade();
	return (out);
}