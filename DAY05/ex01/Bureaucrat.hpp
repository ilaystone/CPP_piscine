/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 10:57:23 by ikhadem           #+#    #+#             */
/*   Updated: 2021/10/14 12:16:44 by ikhadem          ###   ########.fr       */
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
	Bureaucrat(void);
public:
	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char	*what() const throw()
		{
			return ("Idiot entered a Grade Too High");
		}
	};
	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char	*what() const throw()
		{
			return ("Idiot entered a Grade Too Low");
		}
	};
	Bureaucrat(std::string const &name, int grade);
	~Bureaucrat(void);

	std::string			getName(void) const;
	int					getGrade(void) const;
	void				setGrade(int grade);

	void				incrementGrade(void);
	void				decrementGrade(void);
	void				SignForm(Form &f) const;
};

#endif