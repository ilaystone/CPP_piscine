/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 11:45:36 by ikhadem           #+#    #+#             */
/*   Updated: 2021/10/11 15:24:45 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	static const int		_bits;
	int						_value;
public:
	Fixed(void);
	Fixed(Fixed const &src);
	Fixed(int const v);
	Fixed(float const v);
	~Fixed(void);

	Fixed &		operator=(Fixed const &rhs);
	int			getRawBits(void) const;
	void		setRawBits(int const raw);
	float		toFloat(void) const;
	int			toInt(void) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed &rhs);

#endif