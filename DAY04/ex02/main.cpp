/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 15:13:41 by ikhadem           #+#    #+#             */
/*   Updated: 2021/11/11 00:27:44 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int		main(void)
{
	// // Can no longer be done
	// const AAnimal	*meta = new AAnimal();
	const AAnimal	*j = new Dog();
	const AAnimal	*i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	// meta->makeSound();
	delete i;
	delete j;
	// delete meta;
	return (0);
}