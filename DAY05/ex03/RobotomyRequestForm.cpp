/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 13:08:24 by ikhadem           #+#    #+#             */
/*   Updated: 2021/10/15 08:20:30 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) :
Form("RobotomyRequestForm", 72, 45, false)
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) :
Form("RobotomyRequestForm", 72, 45, false),
_target(target)
{
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	return ;
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
