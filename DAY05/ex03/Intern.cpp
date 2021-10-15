/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 08:50:34 by ikhadem           #+#    #+#             */
/*   Updated: 2021/10/15 09:50:00 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
	this->_form_names[0] = "shrubbery creation";
	this->_form_names[1] = "robotomy request";
	this->_form_names[2] = "presidential pardon";
	return ;
}

Intern::~Intern(void)
{
	return ;
}

Form	*Intern::createForm(std::string const &type, std::string const &target)
{
	Form	*ret;
	int		request_type;

	for (int i = 0; i < NUMBER_OF_FORMS; i++)
	{
		if (type.compare(this->_form_names[i]) == 0)
			request_type = i;
	}
	switch (request_type)
	{
		case 0:
			ret = new ShrubberyCreationForm(target);
			break ;
		case 1:
			ret = new RobotomyRequestForm(target);
			break ;
		case 2:
			ret = new PresidentialPardonForm(target);
			break ;
		default :
			throw Intern::FormRequestNotFound();
			break ;
	}
	std::cout << "Intern creates :" << ret->getName() << std::endl;
	return (ret);
}

Form	*Intern::makeForm(std::string const &type, std::string const &target)
{
	Form		*ret = nullptr;

	try
	{
		ret = this->createForm(type, target);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (ret);
}