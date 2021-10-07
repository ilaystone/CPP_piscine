/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 18:17:13 by ikhadem           #+#    #+#             */
/*   Updated: 2021/10/07 10:17:30 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <iomanip>

# define D_WIDTH 10

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
	Contact(std::string fn, std::string ln, std::string nn, std::string pn, std::string s);
	~Contact(void);

	void			SetFirstName(std::string n);
	std::string		GetFirstName(void) const;
	void			SetLastName(std::string n);
	std::string		GetLastName(void) const;
	void			SetNickname(std::string n);
	std::string		GetNickname(void) const;
	void			SetPhoneNumber(std::string n);
	std::string		GetPhoneNumber(void) const;
	void			SetSecret(std::string s);
	std::string		GetSecret(void) const;

	void			ContactDisplay(void) const;
	void			ContactFullDisplay(void) const;
};

#endif