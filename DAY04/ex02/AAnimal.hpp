/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 15:15:02 by ikhadem           #+#    #+#             */
/*   Updated: 2021/10/14 08:19:45 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AAnimal_HPP
#define AAnimal_HPP

#include <iostream>
#include <string>

class AAnimal
{
protected:
	std::string		_type;
public:
	AAnimal(void);
	AAnimal(std::string const &type);
	AAnimal(AAnimal const &rhs);
	virtual ~AAnimal(void);

	AAnimal			&operator=(AAnimal const &rhs);

	std::string		getType(void) const;
	virtual void	makeSound(void) const = 0;
};

#endif