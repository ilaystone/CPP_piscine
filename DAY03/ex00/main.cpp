/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 08:34:36 by ikhadem           #+#    #+#             */
/*   Updated: 2021/10/13 09:06:32 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int		main(void)
{
	ClapTrap	a("Zeus");
	ClapTrap	b(a);

	b.setName("Metis");
	a.attack(b.getName());
	b.takeDammage(a.getAttackDamage());
	b.beRepaired(b.getEnergyPoints());
	return (0);
}