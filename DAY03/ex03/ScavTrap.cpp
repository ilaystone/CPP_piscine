/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 09:09:44 by ikhadem           #+#    #+#             */
/*   Updated: 2021/11/09 15:27:02 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap("Default")
{
	std::cout << "ScavTrap Default Constructor Called" << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string const &name) :
ClapTrap(name, SCAVTRAP_HITPOINTS, SCAVTRAP_ENERGYPOINTS, SCAVTRAP_ATTACKDAMMAGE)
{
	std::cout << "ScavTrap Name Parameter constructor Called" << std::endl;
	return;
}

ScavTrap::ScavTrap(ScavTrap const &rhs) : ClapTrap("Name")
{
	std::cout << "ScavTrap Copy Constructor Called" << std::endl;
	*this = rhs;
	return ;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &rhs)
{
	std::cout << "ScavTrap Assignment operator Called" << std::endl;
	this->setName(rhs.getName());
	this->setHitPoints(rhs.getHitPoint());
	this->setEnergyPoints(rhs.getEnergyPoints());
	this->setAttackDamage(rhs.getAttackDamage());
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap ";
	std::cout << this->getName();
	std::cout << " Destructor Called" << std::endl;
	return ;
}

void		ScavTrap::attack(std::string const &target)
{
	std::cout << "ScavTrap " << this->getName();
	std::cout << " attack " << target;
	std::cout << ", causing " << this->getAttackDamage();
	std::cout << " points of dammage!" << std::endl;
	return ;
}

void		ScavTrap::guardGate(void) const
{
	std::cout << "ScavTrap ";
	std::cout << this->getName();
	std::cout << " has entered Gate keeper mode" << std::endl;
	return ;
}
