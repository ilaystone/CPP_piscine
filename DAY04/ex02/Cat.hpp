/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 15:37:15 by ikhadem           #+#    #+#             */
/*   Updated: 2021/10/14 08:21:20 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include <iostream>
#include <string>

class Cat : public AAnimal
{
public:
	Cat(void);
	Cat(Cat const &Cat);
	~Cat(void);

	Cat				&operator=(Cat const &rhs);

	virtual void	makeSound(void) const;
} ;

#endif