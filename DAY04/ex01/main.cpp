/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 16:04:41 by ikhadem           #+#    #+#             */
/*   Updated: 2021/11/11 00:17:19 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int		main(void)
{
	const Animal	*j = new Dog();
	const Animal	*i = new Cat();
	delete j;
	delete i;

	Cat				*c1 = new Cat();
	Cat				*c2 = new Cat(*c1);
	delete c1;
	delete c2;

	std::cout << std::endl << std::endl << std::endl;

	Animal			*arr[10];

	for (int k = 0; k < 5; k++)
		arr[k] = new Cat();
	for (int k = 5; k < 10; k++)
		arr[k] = new Dog();

	for (int k = 0; k < 10; k++)
		delete	arr[k];
	return (0);
}