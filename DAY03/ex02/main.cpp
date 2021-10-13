/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 09:07:51 by ikhadem           #+#    #+#             */
/*   Updated: 2021/10/13 10:40:49 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int		main(void)
{
	ClapTrap	a("Zeus");
	ClapTrap	b(a);
	ScavTrap	c("Cerberos");

	b.setName("Metis");
	a.attack(b.getName());
	b.takeDammage(a.getAttackDamage());
	b.beRepaired(b.getEnergyPoints());
	c.guardGate();
	c.attack(a.getName());
	a.takeDammage(c.getAttackDamage());
	b.attack(c.getName());
	c.takeDammage(b.getAttackDamage());
	c.beRepaired(c.getEnergyPoints());
	delete d;
	return (0);
}