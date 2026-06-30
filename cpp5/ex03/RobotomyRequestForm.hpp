/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 14:17:53 by htavares          #+#    #+#             */
/*   Updated: 2026/06/30 12:42:14 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include "Bureaucrat.hpp"

class RobotomyRequestForm : public AForm
{
	private:
	std::string target;
	
	public:
	RobotomyRequestForm(void);
	RobotomyRequestForm(const std::string &target);
	~RobotomyRequestForm();
	RobotomyRequestForm(const RobotomyRequestForm &b);
	RobotomyRequestForm &operator=(const RobotomyRequestForm &b);

	bool beSigned(Bureaucrat &b);
	bool execute(Bureaucrat const & executor) const;
};