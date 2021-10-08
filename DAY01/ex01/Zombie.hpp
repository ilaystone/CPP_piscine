/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 14:58:40 by ikhadem           #+#    #+#             */
/*   Updated: 2021/10/08 15:10:03 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
private:
	std::string		_name;
public:
	Zombie(std::string n);
	Zombie(void);
	~Zombie(void);
	void	announce(void);
	void	SetName(std::string n);
};

Zombie*		zombieHorde(int n, std::string name);

#endif