/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 11:02:31 by ikhadem           #+#    #+#             */
/*   Updated: 2021/11/09 15:27:17 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) :
ClapTrap("default"),
ScavTrap("Default"),
FragTrap("Default")
{
	std::cout << "DiamonTrap Default Constructor Called" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(std::string const &name) :
ClapTrap(name + "_clap_name", FRAGTRAP_HITPOINTS, SCAVTRAP_ENERGYPOINTS, FRAGTRAP_ATTACKDAMMAGE),
ScavTrap(name + "_scav_trap"),
FragTrap(name + "_frag_trap"),
_name(name)
{
	std::cout << "DimondTrap Name Parameter Constructor Called" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(DiamondTrap const &rhs) :
ClapTrap("default"),
ScavTrap("Default"),
FragTrap("Default")
{
	*this = rhs;
	return ;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamonTrap ";
	std::cout << this->getName();
	std::cout << " Destructor Called" << std::endl;
	return ;
}

DiamondTrap		&DiamondTrap::operator=(DiamondTrap const &rhs)
{
	std::cout << "DiamondTrap Assignment operator Called" << std::endl;
	this->setName(rhs.getName());
	this->setHitPoints(rhs.getHitPoint());
	this->setEnergyPoints(rhs.getEnergyPoints());
	this->setAttackDamage(rhs.getAttackDamage());
	return (*this);
}

void			DiamondTrap::whoAmI(void) const
{
	std::cout << "ClapTrap Name: " << ClapTrap::getName() << std::endl;
	std::cout << "DiamondTrap Name: " << this->_name << std::endl;
	return ;
}

void		DiamondTrap::attack(std::string const &target)
{
	ScavTrap::attack(target);
	return;
}
