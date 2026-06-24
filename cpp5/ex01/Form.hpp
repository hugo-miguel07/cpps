/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 17:08:12 by htavares          #+#    #+#             */
/*   Updated: 2026/06/24 17:41:33 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <exception>
#include <ostream>
#include <string>
#include "Bureaucrat.hpp"

class Form
{
	private:
	const std::string	name;
	bool				signStatus;
	const int			gradeSign;
	const int			gradeExec;

	public:

	//exception stuff
	class GradeTooHighException : public std::exception
	{
		public:
		virtual const char *what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		public:
		virtual const char *what() const throw();
	};

	//class methods
	Form(void);
	Form(const std::string &name, bool signStatus, int gradeSign, int gradeExec);
	~Form();
	Form(const Form &b);
	Form &operator=(const Form &b);

	std::string	getName() const;
	bool getSignStatus() const;
	int getGradeSign() const;
	int getGradeExec() const;

	void beSigned(Bureaucrat &b);
	void signForm();
	
};

std::ostream &operator<<(std::ostream &out, const Form &b);