/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShruberryCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 14:17:58 by htavares          #+#    #+#             */
/*   Updated: 2026/06/25 15:25:25 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

class ShruberryCreationForm : public AForm
{
	private:
	std::string target;
	
	public:
	ShruberryCreationForm(void);
	ShruberryCreationForm(const std::string &target);
	~ShruberryCreationForm();
	ShruberryCreationForm(const ShruberryCreationForm &b);
	ShruberryCreationForm &operator=(const ShruberryCreationForm &b);

	bool beSigned(Bureaucrat &b);
	bool execute(Bureaucrat const & executor) const;
};