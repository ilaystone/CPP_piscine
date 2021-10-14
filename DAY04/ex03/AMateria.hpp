/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 08:48:42 by ikhadem           #+#    #+#             */
/*   Updated: 2021/10/14 10:29:58 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "ICharacter.hpp"
#include <iostream>
#include <string>

class ICharacter;

class AMateria
{
private:
	AMateria(void);
protected:
	std::string		_type;
public:
	AMateria(std::string const & type);
	AMateria(AMateria const &rhs);
	virtual ~AMateria(void);

	AMateria			&operator=(AMateria const &rhs);

	std::string const	&getType() const; //Returns the materia type
	virtual AMateria	*clone() const = 0;
	virtual void		use(ICharacter& target) = 0;
};

#endif