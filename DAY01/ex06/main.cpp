/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 10:44:43 by ikhadem           #+#    #+#             */
/*   Updated: 2021/10/11 10:59:21 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int		main(int ac, char **av)
{
	std::string		levels[5] = { "DEBUG", "INFO", "WARNING", "ERROR", "GABAGE" };
	Karen	k;

	if (ac == 2)
	{
		if (std::string(av[1]).compare("TEST") == 0)
		{
			for (int i = 0; i < 5; i++)
			{
				std::cout << "LEVEL " << i << " :" << std::endl;
				k.complain(levels[i]);
				std::cout << std::endl << std::endl;
			}
		}
		else
			k.complain(av[1]);
	}
	else
		k.complain("GARBAGE");
	return (0);
}