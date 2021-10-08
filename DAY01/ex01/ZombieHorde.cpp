/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 15:01:34 by ikhadem           #+#    #+#             */
/*   Updated: 2021/10/08 15:13:51 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*		zombieHorde(int n, std::string name)
{
	Zombie*		horde = new Zombie[n];
	for (int i = 0; i < n; i++)
		horde[i].SetName(name + " " + std::to_string(i + 1));
	return (horde);
}
