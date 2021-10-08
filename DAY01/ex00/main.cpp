/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 14:38:13 by ikhadem           #+#    #+#             */
/*   Updated: 2021/10/08 14:56:40 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int		main(void)
{
	Zombie		z1("Zombie 1");
	z1.announce();

	Zombie		*z2;
	z2 = newZombie("Zombie 2");
	z2->announce();
	delete z2;

	randomChump("Zombie 3");
	return (0);
}