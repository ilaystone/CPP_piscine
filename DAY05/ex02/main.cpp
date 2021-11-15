/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 10:56:23 by ikhadem           #+#    #+#             */
/*   Updated: 2021/11/16 00:55:58 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

int		main(void)
{
	try
	{
		Bureaucrat		falsy("falsy", 200);
	}
	catch (std::exception const &e)
	{
		std::cout << e.what() << std::endl;
	}
	{
		Bureaucrat		a("hamid", 80);
		ShrubberyCreationForm	s = ShrubberyCreationForm("Home");
		RobotomyRequestForm		r = RobotomyRequestForm("ILAY");
		PresidentialPardonForm	p = PresidentialPardonForm("Athia");
		a.SignForm(s);
		a.SignForm(r);
		a.SignForm(p);
		a.excecuteForm(s);
		a.excecuteForm(r);
		a.excecuteForm(p);
	}
	{
		Bureaucrat		b("hassan", 10);
		ShrubberyCreationForm	s = ShrubberyCreationForm("Home");
		RobotomyRequestForm		r = RobotomyRequestForm("ILAY");
		PresidentialPardonForm	p = PresidentialPardonForm("Athia");
		b.SignForm(s);
		b.SignForm(r);
		b.SignForm(p);
		b.excecuteForm(s);
		b.excecuteForm(r);
		b.excecuteForm(p);
	}
	{
		Bureaucrat				president("presiden Shinra", 1);
		ShrubberyCreationForm	s = ShrubberyCreationForm("Home");
		RobotomyRequestForm		r = RobotomyRequestForm("ILAY");
		PresidentialPardonForm	p = PresidentialPardonForm("Athia");
		president.excecuteForm(p);
		president.SignForm(p);
		president.excecuteForm(p);
	}
	return (0);
}