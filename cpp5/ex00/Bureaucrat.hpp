/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-06-20 17:54:20 by htavares          #+#    #+#             */
/*   Updated: 2026-06-20 17:54:20 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Bureaucrat
{
	private:
	const std::string	name;
	int					grade;

	public:
	Bureaucrat(void);
	~Bureaucrat();
	Bureaucrat(const Bureaucrat &b);
	Bureaucrat &operator=(const Bureaucrat &b);

};
