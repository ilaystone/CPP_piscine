/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 15:20:39 by ikhadem           #+#    #+#             */
/*   Updated: 2021/10/13 15:48:33 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
	std::cout << "Dog Default Construcor Called" << std::endl;
	return ;
}

Dog::Dog(std::string const &name) : Animal(name)
{
	std::cout << "Dog Parametric Constructor Called" << std::endl;
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
	std::cout << "Dog destructor Called" << std::endl;
	return ;
}

Dog		&Dog::operator=(Dog const &rhs)
{
	std::cout << "Dog Assignation Operator Called" << std::endl;
	this->_type = rhs.getType();
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Dog Has Made A Sound %WOOF%" << std::endl;
	return ;
}
