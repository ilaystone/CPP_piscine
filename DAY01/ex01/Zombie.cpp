/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 15:01:05 by ikhadem           #+#    #+#             */
/*   Updated: 2021/10/08 15:07:52 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	return ;
}

Zombie::Zombie(std::string n)
{
	this->_name = n;
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << " destructed!" << std::endl;
	return ;
}

void	Zombie::announce(void)
{
	std::cout << this->_name  << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::SetName(std::string n)
{
	this->_name = n;
	return ;
}
