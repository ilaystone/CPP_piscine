/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 08:33:29 by ikhadem           #+#    #+#             */
/*   Updated: 2021/11/07 14:17:20 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
private:
	ClapTrap(void);

protected:
	std::string		_name;
	unsigned int	_hit_points;
	unsigned int	_energy_points;
	unsigned int	_attack_damage;

public:
	ClapTrap(std::string const &name);
	ClapTrap(std::string const &name, unsigned int hp, unsigned int ep, unsigned int ad);
	ClapTrap(ClapTrap const &rhs);
	~ClapTrap(void);

	ClapTrap		&operator=(ClapTrap const &rhs);
	void			attack(std::string const &target);
	void			takeDammage(unsigned int amount);
	void			beRepaired(unsigned int amount);

	void			setName(std::string const &name);
	std::string		getName(void) const;
	void			setHitPoints(unsigned int amount);
	unsigned int	getHitPoint(void) const;
	void			setEnergyPoints(unsigned int amount);
	unsigned int	getEnergyPoints(void) const;
	void			setAttackDamage(unsigned int amount);
	unsigned int	getAttackDamage(void) const;
};

#endif