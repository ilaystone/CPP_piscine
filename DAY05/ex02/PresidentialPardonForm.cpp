/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 13:43:58 by ikhadem           #+#    #+#             */
/*   Updated: 2021/11/16 00:44:28 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) :
Form("PresidentialPardonForm", 25, 5)
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) :
Form("PresidentialPardonForm", 25, 5),
_target(target)
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &rhs) :
Form("PresidentialPardonForm", 25, 5)
{
	*this = rhs;
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	return ;
}

PresidentialPardonForm		&PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
	this->setIsSigned(rhs.getIsSigned());
	this->_target = rhs.getTarget();
	return (*this);
}

std::string					PresidentialPardonForm::getTarget(void) const
{
	return (this->_target);
}

void						PresidentialPardonForm::action(void) const
{
	std::cout << this->_target;
	std::cout << " has been pardoned by Zafod Beeblebrox" << std::endl;
	return ;
}
