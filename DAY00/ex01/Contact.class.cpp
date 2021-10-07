/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 18:17:40 by ikhadem           #+#    #+#             */
/*   Updated: 2021/10/07 11:55:17 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact(void)
{
	return ;
}

Contact::Contact(std::string fn, std::string ln, std::string nn, std::string pn, std::string s) :
	_first_name(fn),
	_last_name(ln),
	_nickname(nn),
	_phone_number(pn),
	_secret(s)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

void			Contact::SetFirstName(std::string n)
{
	this->_first_name = n;
	return ;
}

void			Contact::SetLastName(std::string n)
{
	this->_last_name = n;
	return ;
}

void			Contact::SetNickname(std::string n)
{
	this->_nickname = n;
	return ;
}

void			Contact::SetPhoneNumber(std::string n)
{
	this->_phone_number = n;
	return ;
}

void			Contact::SetSecret(std::string s)
{
	this->_secret = s;
	return ;
}

std::string		Contact::GetFirstName(void) const
{
	return (this->_first_name);
}

std::string		Contact::GetLastName(void) const
{
	return (this->_last_name);
}

std::string		Contact::GetNickname(void) const
{
	return (this->_nickname);
}

std::string		Contact::GetPhoneNumber(void) const
{
	return (this->_phone_number);
}

std::string		Contact::GetSecret(void) const
{
	return (this->_secret);
}

std::string		truncateAttribute(std::string f)
{
	if (f.length() > D_WIDTH)
		return f.substr(0, 9).append(".");
	return (f);
}

void			displayAttribute(std::string an, std::string a)
{
	std::cout << std::setw(15);
	std::cout << std::left;
	std::cout << an;
	std::cout << std::setw(2);
	std::cout << std::left;
	std::cout << ":";
	std::cout << a << std::endl;
	return ;
}

void			Contact::ContactDisplay(void) const
{
	std::cout << "| ";
	std::cout << std::setw(D_WIDTH);
	std::cout << truncateAttribute(this->GetFirstName()) << " | ";
	std::cout << std::setw(D_WIDTH);
	std::cout << truncateAttribute(this->GetLastName()) << " | ";
	std::cout << std::setw(D_WIDTH);
	std::cout << truncateAttribute(this->GetNickname()) << " | ";
	std::cout << std::setw(D_WIDTH);
	std::cout << truncateAttribute(this->GetPhoneNumber()) << " |";
	std::cout << std::endl;
	return ;
}

void		Contact::ContactFullDisplay(void) const
{
	displayAttribute("First Name", this->GetFirstName());
	displayAttribute("Last Name", this->GetLastName());
	displayAttribute("Nickname", this->GetNickname());
	displayAttribute("Phone Number", this->GetPhoneNumber());
	return ;
}
