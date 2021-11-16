/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 10:47:16 by ikhadem           #+#    #+#             */
/*   Updated: 2021/11/09 15:27:40 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <string>
#include <iostream>

# define FRAGTRAP_HITPOINTS 100
# define FRAGTRAP_ENERGYPOINTS 100
# define FRAGTRAP_ATTACKDAMMAGE 30

class FragTrap : virtual public ClapTrap
{
private:
	FragTrap(void);
public:
	FragTrap(std::string const &name);
	FragTrap(FragTrap const &rhs);
	~FragTrap(void);

	FragTrap	&operator=(FragTrap const &rhs);
	void		highFivesGuys(void) const;
	void		attack(std::string const &target);
};

#endif