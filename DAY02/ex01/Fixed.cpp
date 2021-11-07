/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 11:46:21 by ikhadem           #+#    #+#             */
/*   Updated: 2021/11/07 09:00:38 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const		Fixed::_bits = 8;

Fixed::Fixed(void) : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed::Fixed(int const v)
{
	std::cout << "Int constructor called" << std::endl;
	this->_value = (v << this->_bits);
	return ;
}

Fixed::Fixed(float const v)
{
	std::cout << "Float constructor called" << std::endl;
	this->_value = (int)(std::roundf(v * (1 << this->_bits)));
	return ;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed &		Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_value = rhs.getRawBits();
	return (*this);
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
