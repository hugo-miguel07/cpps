/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 18:11:58 by htavares          #+#    #+#             */
/*   Updated: 2026/06/04 18:33:41 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Brain
{
	private:
	std::string ideas[100];
	unsigned int ideaidx;
	
	public:
	Brain( void );
	~Brain();
	Brain(const Brain &a);
	Brain& operator=(const Brain& a);

	std::string *getIdeas( void ) const;
	void setIdea(std::string idea);
};
