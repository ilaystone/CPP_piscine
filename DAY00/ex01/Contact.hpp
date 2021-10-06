/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 18:17:13 by ikhadem           #+#    #+#             */
/*   Updated: 2021/10/06 18:34:01 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact
{
private:
	std::string		_first_name;
	std::string		_last_name;
	std::string		_nickname;
	std::string		_phone_number;
	std::string		_secret;
public:
	Contact(void);
	~Contact();
	void			SetFirstName(std::string n);
	void			SetLastName(std::string n);
	void			SetNickname(std::string n);
	void			SetPhoneNumber(std::string n);
	void			SetSecret(std::string s);
	std::string		GetFirstName(void) const;
	std::string		GetLastName(void) const;
	std::string		GetNickname(void) const;
	std::string		GetPhoneNumber(void) const;
	std::string		GetSecret(void) const;
};

#endif