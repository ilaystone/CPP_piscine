/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 15:17:27 by ikhadem           #+#    #+#             */
/*   Updated: 2021/10/14 08:11:44 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("Animal")
{
	std::cout << "Animal Default Construcor Called" << std::endl;
	return ;
}

Animal::Animal(std::string const &type) : _type(type)
{
	std::cout << "Animal Parametric Constructor Called" << std::endl;
	return ;
}

Animal::Animal(Animal const &rhs)
{
	std::cout << "Animal Copy Constructor Called" << std::endl;
	*this = rhs;
	return ;
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor Called" << std::endl;
	return ;
}

Animal		&Animal::operator=(Animal const &rhs)
{
	std::cout << "Animal Assignation Operator Called";
	this->_type = rhs.getType();
	return (*this);
}

std::string	Animal::getType(void) const
{
	return (this->_type);
}

void		Animal::setType(std::string const &name)
{
	this->_type = name;
	return ;
}

void		Animal::makeSound() const
{
	std::cout << "Animal has made a sound" << std::endl;
	return ;
}
