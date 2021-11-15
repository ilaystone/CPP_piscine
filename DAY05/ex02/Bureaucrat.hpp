/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 10:57:23 by ikhadem           #+#    #+#             */
/*   Updated: 2021/11/15 23:30:05 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "Form.hpp"
#include <iostream>
#include <string>

class Form;

class Bureaucrat
{
private:
	std::string const	_name;
	int					_grade;
public:
	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char	*what() const throw()
		{
			return ("BUREUCRAT: grade too high");
		}
	};
	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char	*what() const throw()
		{
			return ("BUREUCRAT: grade too low");
		}
	};
	Bureaucrat(void);
	Bureaucrat(std::string const &name, int grade);
	Bureaucrat(Bureaucrat const &rhs);
	~Bureaucrat(void);

	Bureaucrat			&operator=(Bureaucrat const &rhs);

	std::string			getName(void) const;
	int					getGrade(void) const;
	void				setGrade(int grade);
	void				incrementGrade(void);
	void				decrementGrade(void);
	void				SignForm(Form &f) const;
	void				excecuteForm(Form const &form);
};

std::ostream	&operator<<(std::ostream &os, Bureaucrat const &rhs);

#endif