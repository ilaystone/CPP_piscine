/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 15:21:04 by ikhadem           #+#    #+#             */
/*   Updated: 2021/10/14 08:21:24 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include <string>
#include <iostream>

class Dog : public AAnimal
{
public:
	Dog(void);
	Dog(Dog const &dog);
	~Dog(void);

	Dog				&operator=(Dog const &rhs);

	virtual void	makeSound(void) const;
};

#endif