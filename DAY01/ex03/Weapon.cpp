/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 15:28:16 by ikhadem           #+#    #+#             */
/*   Updated: 2021/10/08 15:49:00 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{
	this->_type = "NULL";
	return ;
}

Weapon::Weapon(std::string t) : _type(t)
{
	return ;
}

Weapon::~Weapon(void)
{
	return ;
}

void			Weapon::setType(std::string t)
{
	this->_type = t;
	return ;
}

std::string		Weapon::getType(void) const
{
	return (this->_type);
}
