/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 08:57:43 by ikhadem           #+#    #+#             */
/*   Updated: 2021/10/14 10:27:55 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
	return ;
}

Cure::Cure(Cure const &rhs) : AMateria("cure")
{
	*this = rhs;
	return ;
}

Cure::~Cure(void)
{
	return ;
}

Cure			&Cure::operator=(Cure const &rhs)
{
	this->_type = rhs.getType();
	return (*this);
}

AMateria			*Cure::clone(void) const
{
	return (new Cure());
}

void				Cure::use(ICharacter &target)
{
	std::cout << "* heals ";
	std::cout << target.getName();
	std::cout << "'s wounds *";
	std::cout << std::endl;
	return ;
}
