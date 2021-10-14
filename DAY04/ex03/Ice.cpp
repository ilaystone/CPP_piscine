/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 08:57:46 by ikhadem           #+#    #+#             */
/*   Updated: 2021/10/14 10:28:06 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
	return ;
}

Ice::Ice(Ice const &rhs) : AMateria("ice")
{
	*this = rhs;
	return ;
}

Ice::~Ice(void)
{
	return ;
}

Ice			&Ice::operator=(Ice const &rhs)
{
	this->_type = rhs.getType();
	return (*this);
}

AMateria			*Ice::clone(void) const
{
	return (new Ice());
}

void				Ice::use(ICharacter &target)
{
	std::cout << "*shoots an ice bolt at ";
	std::cout << target.getName();
	std::cout << " *" << std::endl;
	return ;
}
