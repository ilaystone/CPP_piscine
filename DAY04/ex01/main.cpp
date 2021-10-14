/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 16:04:41 by ikhadem           #+#    #+#             */
/*   Updated: 2021/10/14 08:01:31 by ikhadem          ###   ########.fr       */
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

	std::cout << std::endl << std::endl << std::endl;

	Animal			*arr[10];

	for (int i = 0; i < 5; i++)
		arr[i] = new Cat();
	for (int i = 5; i < 10; i++)
		arr[i] = new Dog();

	for (int i = 0; i < 10; i++)
		delete	arr[i];
	return (0);
}