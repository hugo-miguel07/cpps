/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 12:50:05 by htavares          #+#    #+#             */
/*   Updated: 2026/06/30 13:30:02 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <exception>
#include <string>
#include "AForm.hpp"

class Intern
{
	public:
	Intern();
	~Intern();
	Intern(const Intern &i);;
	Intern &operator=(const Intern &i);
	AForm *makeForm(std::string form, std::string target);
	class FormDoesntExistException : public std::exception
	{
		public:
		virtual const char *what() const throw();
	};
};