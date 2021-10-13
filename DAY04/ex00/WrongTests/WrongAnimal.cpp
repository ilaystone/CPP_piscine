/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 15:17:27 by ikhadem           #+#    #+#             */
/*   Updated: 2021/10/13 15:50:58 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("WrongAnimal")
{
	std::cout << "WrongAnimal Default Construcor Called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(std::string const &type) : _type(type)
{
	std::cout << "WrongAnimal Parametric Constructor Called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(WrongAnimal const &rhs)
{
	std::cout << "WrongAnimal Copy Constructor Called" << std::endl;
	*this = rhs;
	return ;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructor Called" << std::endl;
	return ;
}

WrongAnimal		&WrongAnimal::operator=(WrongAnimal const &rhs)
{
	std::cout << "WrongAnimal Assignation Operator Called";
	this->_type = rhs.getType();
	return (*this);
}

std::string	WrongAnimal::getType(void) const
{
	return (this->_type);
}

void		WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal has made a sound" << std::endl;
	return ;
}
