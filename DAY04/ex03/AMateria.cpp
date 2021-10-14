/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Amateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 08:49:09 by ikhadem           #+#    #+#             */
/*   Updated: 2021/10/14 08:56:08 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
	return ;
}

AMateria::AMateria(std::string const & type)
{
	this->_type = type;
	return ;
}

AMateria::AMateria(AMateria const &rhs)
{
	*this = rhs;
	return ;
}

AMateria::~AMateria(void)
{
	return ;
}

AMateria			&AMateria::operator=(AMateria const &rhs)
{
	this->_type = rhs.getType();
	return (*this);
}

std::string const	&AMateria::getType() const
{
	return (this->_type);
}
