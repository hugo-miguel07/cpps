/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/20 17:54:20 by htavares          #+#    #+#             */
/*   Updated: 2026/06/30 12:12:44 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <exception>
#include <ostream>
#include <string>
#include "AForm.hpp"

class Bureaucrat
{
	private:
	const std::string	name;
	int					grade;

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
	Bureaucrat(void);
	Bureaucrat(const std::string &name, int grade);
	~Bureaucrat();
	Bureaucrat(const Bureaucrat &b);
	Bureaucrat &operator=(const Bureaucrat &b);

	std::string	getName() const;
	int getGrade() const;

	void addGrade();
	void takeGrade();
	void signForm(AForm &f);
	
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &b);