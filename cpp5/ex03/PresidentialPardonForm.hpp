/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 14:17:48 by htavares          #+#    #+#             */
/*   Updated: 2026/06/30 12:21:16 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include "Bureaucrat.hpp"

class PresidentialPardonForm : public AForm
{
	private:
	std::string target;
	
	public:
	PresidentialPardonForm(void);
	PresidentialPardonForm(const std::string &target);
	~PresidentialPardonForm();
	PresidentialPardonForm(const PresidentialPardonForm &b);
	PresidentialPardonForm &operator=(const PresidentialPardonForm &b);

	bool execute(Bureaucrat const & executor) const;
};
