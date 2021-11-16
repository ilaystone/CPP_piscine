/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 16:00:02 by ikhadem           #+#    #+#             */
/*   Updated: 2021/11/13 01:13:46 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongAnimal_HPP
#define WrongAnimal_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
private:
protected:
	std::string		_type;
	WrongAnimal(void);
public:
	WrongAnimal(std::string const &type);
	WrongAnimal(WrongAnimal const &rhs);
	~WrongAnimal(void);

	WrongAnimal			&operator=(WrongAnimal const &rhs);

	std::string		getType(void) const;
	void			makeSound(void) const;
};

#endif