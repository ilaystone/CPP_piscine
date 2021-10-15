/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 13:43:58 by ikhadem           #+#    #+#             */
/*   Updated: 2021/10/15 10:10:58 by ikhadem          ###   ########.fr       */
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

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	return ;
}

void		PresidentialPardonForm::action(void) const
{
	std::cout << this->_target;
	std::cout << " has been pardoned by Zafod Beeblebrox" << std::endl;
	return ;
}
