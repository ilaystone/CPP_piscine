/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 11:53:21 by ikhadem           #+#    #+#             */
/*   Updated: 2021/11/15 23:14:35 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(Form const &rhs) :
_name(rhs.getName()),
_grade_to_sign(rhs.getGradeToSign()),
_grade_to_excecute(rhs.getGradeToExecute()),
_is_signed(rhs.getIsSigned())
{
	return ;
}

Form::Form(std::string const &name, int const gts, int const gte) :
_name(name),
_grade_to_sign(gts),
_grade_to_excecute(gte),
_is_signed(false)
{
	if (gts < 1 || gte < 1)
		throw Form::GradeTooHighException();
	if (gts > 150 || gte > 150)
		throw Form::GradeTooLowException();
	return ;
}

Form::~Form(void)
{
	return ;
}

Form					&Form::operator=(Form const &rhs)
{
	const_cast<std::string &>(this->_name) = rhs.getName();
	const_cast<int &>(this->_grade_to_sign) = rhs.getGradeToSign();
	const_cast<int &>(this->_grade_to_excecute) = rhs.getGradeToExecute();
	this->_is_signed = rhs.getIsSigned();
	return (*this);
}

std::string const		&Form::getName(void) const
{
	return (this->_name);
}

int 					Form::getGradeToSign(void) const
{
	return (this->_grade_to_sign);
}

int 					Form::getGradeToExecute(void) const
{
	return (this->_grade_to_excecute);
}

bool					Form::getIsSigned(void) const
{
	return (this->_is_signed);
}

void					Form::setIsSigned(bool is)
{
	this->_is_signed = is;
	return ;
}

void			Form::beSigned(Bureaucrat const &b)
{
	if (this->getGradeToSign() < b.getGrade())
		throw Form::GradeTooLowException();
	else
	{
		this->setIsSigned(true);
	}
	return ;
}

std::ostream	&operator<<(std::ostream &out, const Form &rhs)
{
	out << "Form: " << rhs.getName() << std::endl;
	out << "\tGrade to sign: " << rhs.getGradeToSign() << std::endl;
	out << "\tGrade to execute: " << rhs.getGradeToExecute() << std::endl;
	out << "\tis Signed ?: " << std::boolalpha << rhs.getIsSigned() << " ";
	return (out);
}
