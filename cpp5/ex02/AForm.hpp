/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 17:08:12 by htavares          #+#    #+#             */
/*   Updated: 2026/06/25 15:21:32 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <exception>
#include <ostream>
#include <string>

class Bureaucrat;

class AForm
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
	AForm(void);
	AForm(const std::string &name, int gradeSign, int gradeExec);
	virtual ~AForm();
	AForm(const AForm &b);
	AForm &operator=(const AForm &b);

	std::string	getName() const;
	bool getSignStatus() const;
	int getGradeSign() const;
	int getGradeExec() const;

	bool beSigned(Bureaucrat &b);
	virtual bool execute(Bureaucrat const & executor) const = 0;
};

std::ostream &operator<<(std::ostream &out, const AForm &b);
