/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 18:15:16 by ikhadem           #+#    #+#             */
/*   Updated: 2021/10/27 16:50:11 by ikhadem          ###   ########.fr       */
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
	_size += ((_size == 8) ? 0 : 1);
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
	std::cout << "Available Commands:" << std::endl;
	std::cout << "ADD" << std::endl;
	std::cout << "SEARCH" << std::endl;
	std::cout << "EXIT" << std::endl;
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

	std::cout << "Input Contact :" << std::endl << std::endl;
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
		execute_add();
	else if (c == p_search)
		execute_search();
	else if (c == p_exit)
		std::exit(0);
	else if (std::cin.eof())
		std::exit(1);
	else
		std::cout << "WRONG COMMAND!!" << std::endl;
	return ;
}

void			Phonebook::execute_add(void)
{
	this->setContact(this->promptContactInputs());
	return ;
}

void		Phonebook::execute_search(void)
{
	std::string		input;
	int				index;

	for (int i = 0; i < this->_size; i++)
	{
		std::cout << std::setw(10) << i;
		this->_list[i].ContactDisplay();
	}
	std::cout << "What Contact To Display\n";
	std::getline(std::cin, input);
	try
	{
		if (std::cin.eof())
			throw std::exception();
		index = std::stoi(input);
	}
	catch (...)
	{
		std::exit(1);
	}
	if (index > 8)
		std::cout << "this application only stores "<< MAX_CONTACTS << " contacts" << std::endl;
	else if (index + 1 > this->_size)
	{
		std::cout << "you only have " << this->_size;
		std::cout << " contacts" << std::endl;
	}
	else if (index >= 0 && index < 8)
		this->_list[index].ContactFullDisplay();
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
	while (1)
		this->execute_command(this->promptCommand());;
	return ;
}
