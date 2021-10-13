/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 15:20:24 by ikhadem           #+#    #+#             */
/*   Updated: 2021/10/13 15:48:05 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat Default Construcor Called" << std::endl;
	return ;
}

WrongCat::WrongCat(std::string const &name) : WrongAnimal(name)
{
	std::cout << "WrongCat Parametric Constructor Called" << std::endl;
	return ;
}

WrongCat::WrongCat(WrongCat const &rhs)
{
	std::cout << "WrongCat Copy Constructor Called" << std::endl;
	*this = rhs;
	return ;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor Called" << std::endl;
	return ;
}

WrongCat		&WrongCat::operator=(WrongCat const &rhs)
{
	std::cout << "WrongCat Assignation Operator Called" << std::endl;
	this->_type = rhs.getType();
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "WrongCat Has Made A Sound %MEOW%" << std::endl;
	return ;
}
