/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 10:48:11 by ikhadem           #+#    #+#             */
/*   Updated: 2021/10/13 13:05:34 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap("Default")
{
	std::cout << "FragTrap Default Constructor Called" << std::endl;
	return ;
}

FragTrap::FragTrap(std::string const &name) : ClapTrap(name, 100, 100, 30)
{
	std::cout << "FragTrap Name Parameter Constructor Called" << std::endl;
	return ;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap ";
	std::cout << this->getName();
	std::cout << " Destructor Called" << std::endl;
	return ;
}

FragTrap	&FragTrap::operator=(FragTrap const &rhs)
{
	std::cout << "FragTrap Assignment operator Called" << std::endl;
	this->setName(rhs.getName());
	this->setHitPoints(rhs.getHitPoint());
	this->setEnergyPoints(rhs.getEnergyPoints());
	this->setAttackDamage(rhs.getAttackDamage());
	return (*this);
}

void			FragTrap::attack(std::string const &target)
{
	std::cout << "FragTrap " << this->getName();
	std::cout << " attack " << target;
	std::cout << ", causing " << this->getAttackDamage();
	std::cout << " points of dammage!" << std::endl;
	return ;
}

void		FragTrap::highFivesGuys(void) const
{
	std::cout << "FragTrap high fives comrades for good effort" << std::endl;
	return ;
}
