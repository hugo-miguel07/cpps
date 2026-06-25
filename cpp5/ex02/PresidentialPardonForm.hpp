/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 14:17:48 by htavares          #+#    #+#             */
/*   Updated: 2026/06/25 14:42:27 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private:
	const std::string target;
	
	public:
	PresidentialPardonForm(void);
	PresidentialPardonForm(const std::string &target);
	~PresidentialPardonForm();
	PresidentialPardonForm(const PresidentialPardonForm &b);
	PresidentialPardonForm &operator=(const PresidentialPardonForm &b);

	bool beSigned(Bureaucrat &b);
	bool execute(Bureaucrat const & executor) const;
};
