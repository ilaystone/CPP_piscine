/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 15:17:27 by ikhadem           #+#    #+#             */
/*   Updated: 2021/10/14 08:19:51 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void) : _type("AAnimal")
{
	std::cout << "AAnimal Default Construcor Called" << std::endl;
	return ;
}

AAnimal::AAnimal(std::string const &type) : _type(type)
{
	std::cout << "AAnimal Parametric Constructor Called" << std::endl;
	return ;
}

AAnimal::AAnimal(AAnimal const &rhs)
{
	std::cout << "AAnimal Copy Constructor Called" << std::endl;
	*this = rhs;
	return ;
}

AAnimal::~AAnimal(void)
{
	std::cout << "AAnimal destructor Called" << std::endl;
	return ;
}

AAnimal		&AAnimal::operator=(AAnimal const &rhs)
{
	std::cout << "AAnimal Assignation Operator Called";
	this->_type = rhs.getType();
	return (*this);
}

std::string	AAnimal::getType(void) const
{
	return (this->_type);
}
