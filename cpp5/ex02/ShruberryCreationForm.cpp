/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShruberryCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 14:17:56 by htavares          #+#    #+#             */
/*   Updated: 2026/06/25 14:45:21 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShruberryCreationForm.hpp"
#include <iostream>
#include <fstream>

ShruberryCreationForm::ShruberryCreationForm(void)
: AForm("PresiPardonForm", 145, 137), target("defaultTarget")
{}

ShruberryCreationForm::ShruberryCreationForm(const std::string &target)
: AForm("PresiPardonForm", 145, 137), target(target)
{}

ShruberryCreationForm::~ShruberryCreationForm()
{}

ShruberryCreationForm::ShruberryCreationForm(const ShruberryCreationForm &b)
: AForm(b), target(b.target)
{}

ShruberryCreationForm &ShruberryCreationForm::operator=(const ShruberryCreationForm &b)
{
	if (this != &b)
	{
		AForm::operator=(b);
		this->target = b.target;
	}
	return *this;
}

bool ShruberryCreationForm::execute(Bureaucrat const & executor) const
{
	if (!getSignStatus())
		throw UnsignedFormException();
	if (executor.getGrade() > 137)
		throw GradeTooLowException();
	std::string outname = this->target + "_shrubbery";
	std::ofstream out(outname.c_str());
	if (!out.is_open()){
		std::cout << outname << " couldn't be open." << std::endl;
		return (false);
	}
	out << "			# #### #### " << std::endl;
	out << "		### \\/#|### |/####" << std::endl;
	out << "	##\\/#/ \\||/##/_/##/_#" << std::endl;
	out << "	###  \\/###|/ \\/ # ###" << std::endl;
	out << "##_\\_#\\_\\## | #/###_/_####" << std::endl;
	out << "## #### # \\ #| /  #### ##/##" << std::endl;
	out << "__#_--###`  |{,###---###-~" << std::endl;
	out << "			\\ }{" << std::endl;
	out << "			}}{" << std::endl;
	out << "			}}{" << std::endl;
	out << "		ejm  {{}" << std::endl;
	out << "		, -=-~{ .-^- _" << std::endl;
	out << "			`}" << std::endl;
	out << "			{" << std::endl;
	out.close();
	return (true);
}
