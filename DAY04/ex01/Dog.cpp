/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 15:20:39 by ikhadem           #+#    #+#             */
/*   Updated: 2021/10/14 07:59:35 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
	std::cout << "Dog Default Construcor Called" << std::endl;
	this->_brain = new Brain();
	return ;
}

Dog::Dog(Dog const &rhs)
{
	std::cout << "Dog Copy Constructor Called" << std::endl;
	*this = rhs;
	return ;
}

Dog::~Dog(void)
{
	delete this->_brain;
	std::cout << "Dog destructor Called" << std::endl;
	return ;
}

Dog		&Dog::operator=(Dog const &rhs)
{
	std::cout << "Dog Assignation Operator Called" << std::endl;
	this->_type = rhs._type;
	this->_brain = new Brain();
	*this->_brain = *rhs._brain;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Dog Has Made A Sound %WOOF%" << std::endl;
	return ;
}
