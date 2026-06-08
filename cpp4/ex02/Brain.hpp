/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 18:11:58 by htavares          #+#    #+#             */
/*   Updated: 2026/06/08 15:39:14 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <string>

class Brain
{
	private:
	std::string ideas[100];
	unsigned int ideaidx;
	
	public:
	Brain( void );
	~Brain();
	Brain(const Brain &b);
	Brain& operator=(const Brain& b);

	std::string *getIdeas( void ) const;
	void setIdea(std::string idea);
};

#endif