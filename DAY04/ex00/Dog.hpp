/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 15:21:04 by ikhadem           #+#    #+#             */
/*   Updated: 2021/10/13 15:40:57 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include <string>
#include <iostream>

class Dog : public Animal
{
public:
	Dog(void);
	Dog(std::string const &name);
	Dog(Dog const &dog);
	~Dog(void);

	Dog				&operator=(Dog const &rhs);

	virtual void	makeSound(void) const;
};

#endif