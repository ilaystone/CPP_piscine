/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 16:00:02 by ikhadem           #+#    #+#             */
/*   Updated: 2021/10/13 16:00:08 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongAnimal_HPP
#define WrongAnimal_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
protected:
	std::string		_type;
public:
	WrongAnimal(void);
	WrongAnimal(std::string const &type);
	WrongAnimal(WrongAnimal const &rhs);
	~WrongAnimal(void);

	WrongAnimal			&operator=(WrongAnimal const &rhs);

	std::string		getType(void) const;
	void			makeSound(void) const;
};

#endif