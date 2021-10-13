/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 09:07:51 by ikhadem           #+#    #+#             */
/*   Updated: 2021/10/13 13:32:32 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int		main(void)
{
	DiamondTrap		a("Ahri");
	a.attack("Charm");
	a.guardGate();
	a.highFivesGuys();
	std::cout << "Hp :" << a.getHitPoint() << std::endl;
	std::cout << "ep :" << a.getEnergyPoints() << std::endl;
	std::cout << "ad :" << a.getAttackDamage() << std::endl;
	a.whoAmI();
	return (0);
}