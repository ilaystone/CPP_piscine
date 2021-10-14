/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 15:20:24 by ikhadem           #+#    #+#             */
/*   Updated: 2021/10/14 07:58:30 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
	std::cout << "Cat Default Construcor Called" << std::endl;
	this->_brain = new Brain();
	return ;
}

Cat::Cat(Cat const &rhs)
{
	std::cout << "Cat Copy Constructor Called" << std::endl;
	*this = rhs;
	return ;
}

Cat::~Cat(void)
{
	delete this->_brain;
	std::cout << "Cat destructor Called" << std::endl;
	return ;
}

Cat		&Cat::operator=(Cat const &rhs)
{
	std::cout << "Cat Assignation Operator Called" << std::endl;
	this->_type = rhs._type;
	this->_brain = new Brain();
	*this->_brain = *rhs._brain;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Cat Has Made A Sound %MEOW%" << std::endl;
	return ;
}
