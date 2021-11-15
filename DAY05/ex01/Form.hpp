/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 11:42:55 by ikhadem           #+#    #+#             */
/*   Updated: 2021/11/15 23:21:24 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <string>
#include <iostream>

class Bureaucrat;

class Form
{
private:
	std::string const		_name;
	int	const				_grade_to_sign;
	int	const				_grade_to_excecute;
	bool					_is_signed;
public:
	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char	*what() const throw()
		{
			return ("FORM: garde too high");
		}
	};
	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char	*what() const throw()
		{
			return ("FORM: garde too low");
		}
	};
	Form(Form const &rhs);
	Form(std::string const &name, int const gts, int const gte);
	~Form(void);

	Form					&operator=(Form const &rhs);

	std::string	const		&getName(void) const;
	int 					getGradeToSign(void) const;
	int 					getGradeToExecute(void) const;
	bool					getIsSigned(void) const;
	void					setIsSigned(bool is);
	void					beSigned(Bureaucrat const &b);
};

std::ostream	&operator<<(std::ostream &out, Form const &rhs);

#endif