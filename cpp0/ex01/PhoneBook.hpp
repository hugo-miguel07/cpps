/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 21:36:59 by htavares          #+#    #+#             */
/*   Updated: 2026/04/13 17:42:06 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <string>
# include "Contact.hpp"

class PhoneBook
{
	private:
	Contact contacts[8];
	int		contact_idx;

	public:
	PhoneBook();
	~PhoneBook();
	void addContact(Contact contact);
	void add_option();
	void search_option() const;
	static std::string parse_number(std::string number);
	static std::string formatColumn(std::string str);
};

#endif
