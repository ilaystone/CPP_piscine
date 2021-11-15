/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 13:08:24 by ikhadem           #+#    #+#             */
/*   Updated: 2021/11/16 00:44:21 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) :
Form("RobotomyRequestForm", 72, 45)
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) :
Form("RobotomyRequestForm", 72, 45),
_target(target)
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &rhs) :
Form("RobotomyRequestForm", 72, 45)
{
	*this = rhs;
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	return ;
}

RobotomyRequestForm		&RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	this->_target = rhs.getTarget();
	this->setIsSigned(rhs.getIsSigned());
	return (*this);
}

std::string	const		RobotomyRequestForm::getTarget(void) const
{
	return (this->_target);
}

void					RobotomyRequestForm::setTarget(std::string &target)
{
	this->_target = target;
}

void		RobotomyRequestForm::action(void) const
{
	std::cout << "skrr skrr" << std::endl;
	if (std::rand() % 2)
		std::cout << this->_target << " has been Robotomized successfully" << std::endl;
	else
		std::cout << "Failure to robotize" << std::endl;
	return ;
}
