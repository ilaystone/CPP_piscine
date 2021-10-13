/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 10:47:16 by ikhadem           #+#    #+#             */
/*   Updated: 2021/10/13 10:54:33 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <string>
#include <iostream>

class FragTrap : public ClapTrap
{
private:
	FragTrap(void);
public:
	FragTrap(std::string const &name);
	FragTrap(FragTrap const &rhs);
	~FragTrap(void);

	FragTrap	&operator=(FragTrap const &rhs);
	void		highFivesGuys(void) const;
};

#endif