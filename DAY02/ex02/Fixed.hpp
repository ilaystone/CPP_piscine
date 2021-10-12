/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 11:45:36 by ikhadem           #+#    #+#             */
/*   Updated: 2021/10/12 08:11:49 by ikhadem          ###   ########.fr       */
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

	Fixed					&operator=(Fixed const &rhs);

	bool					operator>(Fixed const &rhs) const;
	bool					operator<(Fixed const &rhs) const;
	bool					operator>=(Fixed const &rhs) const;
	bool					operator<=(Fixed const &rhs) const;
	bool					operator==(Fixed const &rhs) const;
	bool					operator!=(Fixed const &rhs) const;

	Fixed					operator+(Fixed const &rhs) const;
	Fixed					operator-(Fixed const &rhs) const;
	Fixed					operator*(Fixed const &rhs) const;
	Fixed					operator/(Fixed const &rhs) const;
	Fixed					&operator++(void);
	Fixed					operator++(int);
	Fixed					&operator--(void);
	Fixed					operator--(int);

	int						getRawBits(void) const;
	void					setRawBits(int const raw);
	float					toFloat(void) const;
	int						toInt(void) const;

	static Fixed			&min(Fixed &f1, Fixed &f2);
	static Fixed			&max(Fixed &f1, Fixed &f2);
	static const Fixed		&min(Fixed const &f1, Fixed const &f2);
	static const Fixed		&max(Fixed const &f1, Fixed const &f2);
};

std::ostream& operator<<(std::ostream& os, const Fixed &rhs);

#endif