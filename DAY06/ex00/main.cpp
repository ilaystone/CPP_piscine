/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 12:53:36 by ikhadem           #+#    #+#             */
/*   Updated: 2021/10/15 13:47:06 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>
#include "Converter.hpp"

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		Converter		conv(av[1]);
		char			c;
		int				i;
		float			f;
		double			d;
		try
		{
			std::cout << "char: ";
			c = conv;
			std::cout << c << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		try
		{
			std::cout << "int: ";
			i = conv;
			std::cout << i << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		try
		{
			std::cout << "float: " << std::fixed;
			f = conv;
			std::cout << std::setprecision(1) << f << "f" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		try
		{
			std::cout << "double: " << std::fixed;
			d = conv;
			std::cout << std::setprecision(1) << d << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	else
		std::cout << "program expects one param" << std::endl;
	return (0);
}