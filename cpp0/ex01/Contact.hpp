/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 17:36:53 by htavares          #+#    #+#             */
/*   Updated: 2026/04/13 17:42:23 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact
{
	private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string number;
	std::string secret;

	public:
	Contact();
	Contact(std::string first_name, std::string last_name,
				std::string nickname, std::string number, std::string secret);
	~Contact();
	std::string getFirstName() const;
	std::string getLastName() const;
	std::string getNickname() const;
	std::string getNumber() const;
	std::string getSecret() const;
};

#endif