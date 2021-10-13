/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 09:09:03 by ikhadem           #+#    #+#             */
/*   Updated: 2021/10/13 13:04:53 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <string>
#include <iostream>

class ScavTrap : virtual public ClapTrap
{
private:
	ScavTrap(void);

public:
	ScavTrap(std::string const &name);
	ScavTrap(ScavTrap const &rhs);
	~ScavTrap(void);

	ScavTrap		&operator=(ScavTrap const &rhs);
	void			attack(std::string const &target);
	void			guardGate(void) const;
};

#endif