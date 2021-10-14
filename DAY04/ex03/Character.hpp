/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 09:13:27 by ikhadem           #+#    #+#             */
/*   Updated: 2021/10/14 10:18:12 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <string>

class Character : public ICharacter
{
private:
	AMateria		*_inv[4];
	std::string		_name;
	bool			_empty_pos[4];
	Character(void);
public:
	Character(std::string const &name);
	Character(Character const &rhs);
	~Character(void);

	Character					&operator=(Character const &rhs);

	virtual std::string const	&getName(void) const;
	virtual void				equip(AMateria *m);
	virtual void				unequip(int idx);
	virtual void				use(int idx, ICharacter &target);
};

#endif