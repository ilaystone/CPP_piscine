/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 10:20:09 by ikhadem           #+#    #+#             */
/*   Updated: 2021/10/11 11:01:39 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
#define KAREN_HPP

#include <iostream>
#include <string>

class Karen
{
	typedef		void (Karen::*funcPtr)(void);
private:
	std::string		_levels[4];

	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);

public:
	Karen(void);
	~Karen(void);
	void	complain(std::string level);
};

#endif