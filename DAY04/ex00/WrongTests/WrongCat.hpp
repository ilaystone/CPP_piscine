/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 15:37:15 by ikhadem           #+#    #+#             */
/*   Updated: 2021/10/13 15:59:23 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "WrongAnimal.hpp"
#include <iostream>
#include <string>

class WrongCat : public WrongAnimal
{
public:
	WrongCat(void);
	WrongCat(std::string const &name);
	WrongCat(WrongCat const &Cat);
	~WrongCat(void);

	WrongCat		&operator=(WrongCat const &rhs);

	void			makeSound(void) const;
} ;

#endif