/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 14:02:00 by ikhadem           #+#    #+#             */
/*   Updated: 2021/10/06 18:09:16 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	Amplify(char *str)
{
	if (str == NULL) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	}
	else {
		for (int i = 0; i < (int)std::strlen(str); i++) {
			std::cout << (char)std::toupper(str[i]);
		}
	}
	return;
}

int		main(int ac, char **av)
{
	if (ac > 1) {
		for (int i = 1; i < ac; i++)
			Amplify(av[i]);
	} else {
		Amplify(NULL);
	}
	std::cout << std::endl;
	return (0);
}