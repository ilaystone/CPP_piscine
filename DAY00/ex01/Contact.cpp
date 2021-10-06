/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 18:17:40 by ikhadem           #+#    #+#             */
/*   Updated: 2021/10/06 18:41:39 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void) {
	return ;
}

Contact::~Contact() {
	return ;
}

void			Contact::SetFirstName(std::string n) {
	this->_first_name = n;
	return ;
}

void			Contact::SetLastName(std::string n) {
	this->_last_name = n;
	return ;
}

void			Contact::SetNickname(std::string n) {
	this->_nickname = n;
	return ;
}

void			Contact::SetPhoneNumber(std::string n) {
	this->_phone_number = n;
	return ;
}

void			Contact::SetSecret(std::string s) {
	this->_secret = s;
	return ;
}

std::string		Contact::GetFirstName(void) const {
	return (this->_first_name);
}

std::string		Contact::GetLastName(void) const {
	return (this->_last_name);
}

std::string		Contact::GetNickname(void) const {
	return (this->_nickname);
}

std::string		Contact::GetPhoneNumber(void) const {
	return (this->_phone_number)
}

std::string		Contact::GetSecret(void) const {
	return (this->_secret);
}
