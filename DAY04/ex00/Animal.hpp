/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 15:15:02 by ikhadem           #+#    #+#             */
/*   Updated: 2021/10/14 07:57:25 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
protected:
	std::string		_type;
public:
	Animal(void);
	Animal(std::string const &type);
	Animal(Animal const &rhs);
	virtual ~Animal(void);

	Animal			&operator=(Animal const &rhs);

	std::string		getType(void) const;
	virtual void	makeSound(void) const;
};

#endif