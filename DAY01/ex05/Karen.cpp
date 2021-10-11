/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 09:13:03 by ikhadem           #+#    #+#             */
/*   Updated: 2021/10/11 10:19:12 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(void)
{
	this->_levels[0] = "DEBUG";
	this->_levels[1] = "INFO";
	this->_levels[2] = "WARNING";
	this->_levels[3] = "ERROR";
	this->_funcs[0] = &Karen::debug;
	this->_funcs[1] = &Karen::info;
	this->_funcs[2] = &Karen::warning;
	this->_funcs[3] = &Karen::error;
	return ;
}

Karen::~Karen(void)
{
	return ;
}

void	Karen::debug(void)
{
	std::cout << "DEBUG :" << std::endl;
	std::cout << "I love to get extra bacon for my \
7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!";
	std::cout << std::endl;
	return ;
}

void	Karen::info(void)
{
	std::cout << "INFO :" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money. \
You don’t put enough! If you did I would not have to ask for it!";
	std::cout << std::endl;
	return ;
}

void	Karen::warning(void)
{
	std::cout << "Warning :" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. \
I’ve been coming here for years and you just \
started working here last month.";
	std::cout << std::endl;
	return ;
}

void	Karen::error(void)
{
	std::cout << "Error :" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now.";
	std::cout << std::endl;
	return ;
}

void	Karen::complain(std::string level)
{
	for (int i = 0; i < 4; i++)
	{
		if ((level.compare(this->_levels[i])) == 0)
			(this->*_funcs[i])();
	}
	return ;
}
