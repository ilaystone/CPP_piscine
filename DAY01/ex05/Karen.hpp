/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 09:13:06 by ikhadem           #+#    #+#             */
/*   Updated: 2021/10/11 10:39:50 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
#define KAREN_HPP

#include <string>
#include <iostream>

class Karen
{
	typedef		void (Karen::*funcPtr)(void);
private:
	std::string		_levels[4];
	funcPtr			_funcs[4];

	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);

public:
	Karen(void);
	~Karen(void);
	void	complain(std::string level);
} ;

#endif