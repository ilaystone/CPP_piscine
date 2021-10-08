/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 13:25:42 by ikhadem           #+#    #+#             */
/*   Updated: 2021/10/08 14:40:35 by ikhadem          ###   ########.fr       */
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
