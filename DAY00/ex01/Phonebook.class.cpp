/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 18:15:16 by ikhadem           #+#    #+#             */
/*   Updated: 2021/10/07 13:21:26 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"

/************
** Private **
************/

void		Phonebook::setContact(Contact c)
{
	_list[_index] = c;
	_index = (_index + 1) % MAX_CONTACTS;
	return ;
}

void			displayMessage(std::string an)
{
	std::cout << std::setw(15);
	std::cout << std::left;
	std::cout << an;
	std::cout << std::setw(2);
	std::cout << std::left;
	std::cout << ":";
	return ;
}

void			displayHomeScreen(void)
{
	std::cout << "+";
	std::cout << std::setw(25) << std::setfill('*');
	std::cout << "+" << std::endl;
	std::cout << "|" << std::setfill(' ');
	std::cout << std::setw(24);
	std::cout << std::left << " ADD";
	std::cout << "|" << std::endl;
	std::cout << "|";
	std::cout << std::setw(24);
	std::cout << " SEARCH" << std::left;
	std::cout << "|" << std::endl;
	std::cout << "|";
	std::cout << std::setw(24);
	std::cout << " EXIT" << std::left;
	std::cout << "|" << std::endl << std::right;
	std::cout << "+";
	std::cout << std::setw(25) << std::setfill('*');
	std::cout << "+" << std::endl;
	std::cout << std::setfill(' ') << std::endl;
	std::cout << "What do you want to do?..:" << std::endl;
	return ;
}

std::string		promptData(std::string d)
{
	std::string	data;

	displayMessage(d);
	std::getline(std::cin, data);
	return (data);
}

Contact			Phonebook::promptContactInputs()
{
	Contact		c;

	std::cout << "**** Input Data : ***" << std::endl << std::endl;
	c.SetFirstName(promptData("First Name"));
	c.SetLastName(promptData("Last Name"));
	c.SetNickname(promptData("Nickname"));
	c.SetPhoneNumber(promptData("Phone Number"));
	c.SetSecret(promptData("Secret"));
	return (c);
}

t_commands		Phonebook::promptCommand(void)
{
	std::string		cmd;

	displayHomeScreen();
	std::getline(std::cin, cmd);
	if (cmd.compare("ADD") == 0)
		return (p_add);
	else if (cmd.compare("SEARCH") == 0)
		return (p_search);
	else if (cmd.compare("EXIT") == 0)
		return (p_exit);
	return (p_error);
}

void			Phonebook::execute_command(t_commands c)
{
	if (c == p_add)
		 
	return ;
}

/***********
** Public **
***********/

Phonebook::Phonebook(void)
{
	_index = 0;
	return ;
}

Phonebook::~Phonebook()
{
	return ;
}

void		Phonebook::StartLine(void)
{
	this->execute_command(this->promptCommand());
	return ;
}
