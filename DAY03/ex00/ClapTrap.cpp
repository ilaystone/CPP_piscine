/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 08:34:55 by ikhadem           #+#    #+#             */
/*   Updated: 2021/10/13 09:01:15 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "ClapTrap Default Constructor Called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string const &name) :
_name(name),
_hit_points(10),
_energy_points(10),
_attack_damage(0)
{
	std::cout << "ClapTrap Parametric Constructor Called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const &rhs)
{
	std::cout << "ClapTrap Copy Constructor Called" << std::endl;
	*this = rhs;
	return ;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap Destructor Called" << std::endl;
	return ;
}

ClapTrap		&ClapTrap::operator=(ClapTrap const &rhs)
{
	std::cout << "Assignment operator Called" << std::endl;
	this->setName(rhs.getName());
	this->setHitPoints(rhs.getHitPoint());
	this->setEnergyPoints(rhs.getEnergyPoints());
	this->setAttackDamage(rhs.getAttackDamage());
	return (*this);
}

void			ClapTrap::attack(std::string const &target)
{
	std::cout << "ClapTrap " << this->getName();
	std::cout << " attack " << target;
	std::cout << ", causing " << this->getAttackDamage();
	std::cout << " points of dammage!" << std::endl;
	return ;
}

void			ClapTrap::takeDammage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->getName();
	std::cout << " has suffered " << amount;
	std::cout << " points of damage!" << std::endl;
	return ;
}

void			ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << this->getName();
	std::cout << " has been repaired for " << amount;
	std::cout << " points of damage!" << std::endl;
	return ;
}

void			ClapTrap::setName(std::string const &name)
{
	this->_name = name;
	return ;
}

std::string		ClapTrap::getName(void) const
{
	return (this->_name);
}

void			ClapTrap::setHitPoints(unsigned int amount)
{
	this->_hit_points = amount;
	return ;
}

unsigned int	ClapTrap::getHitPoint(void) const
{
	return (this->_hit_points);
}

void			ClapTrap::setEnergyPoints(unsigned int amount)
{
	this->_energy_points = amount;
	return ;
}

unsigned int	ClapTrap::getEnergyPoints(void) const
{
	return (this->_energy_points);
}

void			ClapTrap::setAttackDamage(unsigned int amount)
{
	this->_attack_damage = amount;
	return ;
}

unsigned int	ClapTrap::getAttackDamage(void) const
{
	return (this->_attack_damage);
}

