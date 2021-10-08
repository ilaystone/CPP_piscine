/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 13:25:57 by ikhadem           #+#    #+#             */
/*   Updated: 2021/10/08 14:53:04 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie
{
private:
	std::string		_name;
	Zombie(void);
public:
	Zombie(std::string n);
	~Zombie(void);
	void	announce(void);
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif