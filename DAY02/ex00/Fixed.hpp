/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 11:45:36 by ikhadem           #+#    #+#             */
/*   Updated: 2021/10/11 14:14:03 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	static const int		_bits;
	int						_value;
public:
	Fixed(void);
	Fixed(Fixed const &src);
	~Fixed(void);

	Fixed &		operator=(Fixed const &rhs);
	int			getRawBits(void) const;
	void		setRawBits(int const raw);
};

#endif