/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 11:01:40 by ikhadem           #+#    #+#             */
/*   Updated: 2021/10/13 12:06:50 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>
#include <string>

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	std::string		_name;
	DiamondTrap(void);
public:
	DiamondTrap(std::string const &name);
	DiamondTrap(DiamondTrap const &rhs);
	~DiamondTrap(void);

	DiamondTrap		&operator=(DiamondTrap const &rhs);
	void			whoAmI(void) const;
	void			attack(std::string const &target);
};

#endif