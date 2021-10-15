/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 10:57:15 by ikhadem           #+#    #+#             */
/*   Updated: 2021/10/15 08:38:21 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const &name, int grade) : _name(name)
{
	try
	{
		this->setGrade(grade);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return ;
}

Bureaucrat::~Bureaucrat(void)
{
	return ;
}

std::string		Bureaucrat::getName(void) const
{
	return (this->_name);
}

int				Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void			Bureaucrat::setGrade(int grade)
{
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade = grade;
	return ;
}

void			Bureaucrat::incrementGrade(void)
{
	try
	{
		setGrade(this->_grade - 1);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return ;
}

void			Bureaucrat::decrementGrade(void)
{
	try
	{
		setGrade(this->_grade + 1);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return ;
}

void			Bureaucrat::SignForm(Form &f) const
{
	try
	{
		f.beSigned(*this);
		std::cout << this->getName() << " signs " << f.getName() << std::endl;
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cout << this->getName() << " connot sign ";
		std::cout << f.getName() << " because " << e.what();
		std::cout << std::endl;
	}
	return ;
}

void				Bureaucrat::excecuteForm(Form const &form)
{
	try
	{
		std::cout << this->getName() << " executes :" << form.getName() << std::endl;
		form.execute(*this);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
