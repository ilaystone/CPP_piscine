/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 09:07:51 by ikhadem           #+#    #+#             */
/*   Updated: 2021/10/13 10:57:22 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int		main(void)
{
	ClapTrap	a("Zeus");
	ScavTrap	b("Metis");
	FragTrap	c("Cerberos");

	c.attack(a.getName());
	a.attack(b.getName());
	b.beRepaired(b.getEnergyPoints());
	c.highFivesGuys();
	b.guardGate();
	return (0);
}