/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 10:57:15 by ikhadem           #+#    #+#             */
/*   Updated: 2021/11/16 00:53:01 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
{
	return ;
}

Bureaucrat::Bureaucrat(std::string const &name, int grade) : _name(name)
{
	this->setGrade(grade);
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const &rhs)
{
	*this = rhs;
	return ;
}

Bureaucrat::~Bureaucrat(void)
{
	return ;
}

Bureaucrat		&Bureaucrat::operator=(Bureaucrat const &rhs)
{
	const_cast<std::string &>(this->_name) = rhs.getName();
	this->_grade = rhs.getGrade();
	return (*this);
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
	setGrade(this->_grade - 1);
	return ;
}

void			Bureaucrat::decrementGrade(void)
{
	setGrade(this->_grade + 1);
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
		std::cout << f.getName() << " because : " << e.what();
		std::cout << std::endl;
	}
	return ;
}

void			Bureaucrat::excecuteForm(Form const &form)
{
	try
	{
		std::cout << this->getName() << " trying to execute :" << form.getName() << std::endl;
		form.execute(*this);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}


std::ostream	&operator<<(std::ostream &os, Bureaucrat const &rhs)
{
	os << rhs.getName() << ", bureaucrat grade:" << rhs.getGrade();
	return (os);
}
