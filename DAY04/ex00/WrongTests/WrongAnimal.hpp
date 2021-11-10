/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 16:00:02 by ikhadem           #+#    #+#             */
/*   Updated: 2021/11/11 00:09:02 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongAnimal_HPP
#define WrongAnimal_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
private:
	WrongAnimal(void);
protected:
	std::string		_type;
public:
	WrongAnimal(std::string const &type);
	WrongAnimal(WrongAnimal const &rhs);
	~WrongAnimal(void);

	WrongAnimal			&operator=(WrongAnimal const &rhs);

	std::string		getType(void) const;
	void			makeSound(void) const;
};

#endif