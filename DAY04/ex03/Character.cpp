/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 09:17:03 by ikhadem           #+#    #+#             */
/*   Updated: 2021/10/14 10:34:44 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
	return ;
}

Character::Character(std::string const &name) : _name(name)
{
	for (int i = 0; i < 4; i++)
	{
		this->_inv[i] = nullptr;
		this->_empty_pos[i] = true;
	}
	return ;
}

Character::Character(Character const &rhs)
{
	*this = rhs;
	return ;
}

Character::~Character(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inv[i] != nullptr)
			delete this->_inv[i];
	}
	return ;
}

Character				&Character::operator=(Character const &rhs)
{
	this->_name = rhs.getName();
	for (int i = 0; i < 4; i++)
	{
		this->_inv[i] = rhs._inv[i]->clone();
		this->_empty_pos[i] = rhs._empty_pos[i];
		delete rhs._inv[i];
	}
	return (*this);
}

std::string const		&Character::getName(void) const
{
	return (this->_name);
}

void					Character::equip(AMateria *m)
{
	if (m != nullptr)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->_empty_pos[i] == true)
			{
				this->_inv[i] = m->clone();
				this->_empty_pos[i] = false;
				break ;
			}
		}
	}
	return ;
}

void					Character::unequip(int idx)
{
	if (idx > 0 && idx < 4)
	{
		this->_inv[idx] = nullptr;
		this->_empty_pos[idx] = true;
	}
	return ;
}

void					Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < 4)
	{
		this->_inv[idx]->use(target);
	}
	return ;
}
