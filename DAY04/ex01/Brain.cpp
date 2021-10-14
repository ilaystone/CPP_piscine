/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 16:07:32 by ikhadem           #+#    #+#             */
/*   Updated: 2021/10/13 17:07:05 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain Default Constructor Called" << std::endl;
	return ;
}

Brain::Brain(Brain const &rhs)
{
	std::cout << "Brain Copy Constructor Called" << std::endl;
	*this = rhs;
	return ;
}

Brain::~Brain(void)
{
	std::cout << "Brain Destructor Called" << std::endl;
	return ;
}

Brain		&Brain::operator=(Brain const &rhs)
{
	std::cout << "Brain Assignation Operator Called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = rhs._ideas[i];
	return (*this);
}
