/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 08:50:14 by ikhadem           #+#    #+#             */
/*   Updated: 2021/11/16 01:00:21 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <string>

#define NUMBER_OF_FORMS 3

class Intern
{
private:
	std::string		_form_names[NUMBER_OF_FORMS];

	Form	*createForm(std::string const &type, std::string const &target);
public:
	class FormRequestNotFound : public std::exception
	{
		virtual const char	*what() const throw()
		{
			return ("\"Form request passed not found\"");
		}
	};
	Intern(void);
	Intern(Intern const &rhs);
	virtual ~Intern(void);

	Intern	&operator=(Intern const &rhs);

	Form	*makeForm(std::string const &type, std::string const &target);
};

#endif