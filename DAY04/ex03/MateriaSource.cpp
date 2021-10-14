/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 09:50:33 by ikhadem           #+#    #+#             */
/*   Updated: 2021/10/14 10:28:29 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
	{
		this->_inv[i] = nullptr;
		this->_empty_pos[i] = true;
	}
	return ;
}

MateriaSource::MateriaSource(MateriaSource const &rhs)
{
	*this = rhs;
	return ;
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inv[i] != nullptr)
			delete this->_inv[i];
	}
	return ;
}

MateriaSource		&MateriaSource::operator=(MateriaSource const &rhs)
{
	for (int i = 0; i < 4; i++)
	{
		this->_inv[i] = rhs._inv[i]->clone();
		this->_empty_pos[i] = rhs._empty_pos[i];
		delete rhs._inv[i];
	}
	return (*this);
}

void				MateriaSource::learnMateria(AMateria *m)
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

AMateria			*MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inv[i]->getType().compare(type) == 0)
		{
			return (this->_inv[i]->clone());
		}
	}
	return (0);
}
