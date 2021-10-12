/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 11:46:21 by ikhadem           #+#    #+#             */
/*   Updated: 2021/10/12 08:16:06 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const		Fixed::_bits = 8;

Fixed::Fixed(void) : _value(0)
{
	return ;
}

Fixed::Fixed(Fixed const &src)
{
	*this = src;
	return ;
}

Fixed::Fixed(int const v)
{
	this->_value = (v << this->_bits);
	return ;
}

Fixed::Fixed(float const v)
{
	this->_value = (int)(std::roundf(v * (1 << this->_bits)));
	return ;
}

Fixed::~Fixed(void)
{
	return ;
}

Fixed		&Fixed::operator=(Fixed const &rhs)
{
	this->_value = rhs.getRawBits();
	return (*this);
}

bool		Fixed::operator>(Fixed const &rhs) const
{
	return (this->_value > rhs.getRawBits());
}

bool		Fixed::operator<(Fixed const &rhs) const
{
	return (this->_value < rhs.getRawBits());
}

bool		Fixed::operator>=(Fixed const &rhs) const
{
	return (this->_value >= rhs.getRawBits());
}

bool		Fixed::operator<=(Fixed const &rhs) const
{
	return (this->_value <= rhs.getRawBits());
}

bool		Fixed::operator==(Fixed const &rhs) const
{
	return (this->_value == rhs.getRawBits());
}

bool		Fixed::operator!=(Fixed const &rhs) const
{
	return (this->_value != rhs.getRawBits());
}

Fixed		Fixed::operator+(Fixed const &rhs) const
{
	return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed		Fixed::operator-(Fixed const &rhs) const
{
	return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed		Fixed::operator*(Fixed const &rhs) const
{
	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed		Fixed::operator/(Fixed const &rhs) const
{
	return (Fixed(this->toFloat() / rhs.toFloat()));
}

int			Fixed::getRawBits() const
{
	return (this->_value);
}

void		Fixed::setRawBits(int const raw)
{
	this->_value = raw;
	return ;
}

float		Fixed::toFloat(void) const
{
	return (((float)(this->_value) / (1 << _bits)));
}

int			Fixed::toInt(void) const
{
	return ((int)(this->_value >> _bits));
}

std::ostream&	operator<<(std::ostream& os, const Fixed &rhs)
{
	os << rhs.toFloat();
	return (os);
}

Fixed			&Fixed::min(Fixed &f1, Fixed &f2)
{
	return (f1 < f2 ? f1 : f2);
}

const Fixed			&Fixed::min(Fixed const &f1, Fixed const &f2)
{
	return (f1 < f2 ? f1 : f2);
}

Fixed			&Fixed::max(Fixed &f1, Fixed &f2)
{
	return (f1 > f2 ? f1 : f2);
}

const Fixed			&Fixed::max(Fixed const &f1, Fixed const &f2)
{
	return (f1 > f2 ? f1 : f2);
}

Fixed				&Fixed::operator++(void)
{
	this->_value += 1;
	return (*this);
}

Fixed				Fixed::operator++(int)
{
	Fixed		f(*this);
	operator++();
	return (f);
}

Fixed				&Fixed::operator--(void)
{
	this->_value -= 1;
	return (*this);
}

Fixed				Fixed::operator--(int)
{
	Fixed		f(*this);
	operator--();
	return (f);
}
