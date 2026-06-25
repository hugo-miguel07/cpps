/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 14:17:53 by htavares          #+#    #+#             */
/*   Updated: 2026/06/25 14:43:57 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

class RobotomyRequestForm : public AForm
{
	private:
	const std::string target;
	
	public:
	RobotomyRequestForm(void);
	RobotomyRequestForm(const std::string &target);
	~RobotomyRequestForm();
	RobotomyRequestForm(const RobotomyRequestForm &b);
	RobotomyRequestForm &operator=(const RobotomyRequestForm &b);

	bool beSigned(Bureaucrat &b);
	bool execute(Bureaucrat const & executor) const;
};