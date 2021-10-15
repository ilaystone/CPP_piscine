/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 10:56:23 by ikhadem           #+#    #+#             */
/*   Updated: 2021/10/15 08:40:01 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

int		main(void)
{
	Bureaucrat		a("hamid", 80);
	Bureaucrat		b("hassan", 10);
	Bureaucrat		president("presiden Shinra", 1);
	Bureaucrat		falsy("falsy", 200);

	ShrubberyCreationForm	s = ShrubberyCreationForm("Home");
	RobotomyRequestForm		r = RobotomyRequestForm("ILAY");
	PresidentialPardonForm	p = PresidentialPardonForm("Athia");

	a.SignForm(s);
	a.SignForm(r);
	a.SignForm(p);
	a.excecuteForm(s);
	a.excecuteForm(r);
	a.excecuteForm(p);
	s.setIsSigned(false);
	r.setIsSigned(false);
	p.setIsSigned(false);
	b.SignForm(s);
	b.SignForm(r);
	b.SignForm(p);
	b.excecuteForm(s);
	b.excecuteForm(r);
	b.excecuteForm(p);
	president.excecuteForm(p);
	return (0);
}