/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 14:57:27 by ikhadem           #+#    #+#             */
/*   Updated: 2021/11/06 08:04:20 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int		main(void)
{
	Zombie		*horde;
	int			n;
	int			i;

	n = 10;
	i = 1;
	horde = zombieHorde(n, "ATHIA" + std::to_string(i++));
	for (int i = 0; i < n; i++)
		horde[i].announce();
	delete [] horde;
	return (0);
}