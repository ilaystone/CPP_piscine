/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 08:38:59 by ikhadem           #+#    #+#             */
/*   Updated: 2021/10/12 10:40:58 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(0), _y(0)
{
	return ;
}

Point::Point(Fixed const x, Fixed const y) : _x(x), _y(y)
{
	return ;
}

Point::Point(float const x, float const y) : _x(x), _y(y)
{
	return ;
}

Point::Point(Point const &rhs)
{
	*this = rhs;
	return ;
}

Point::~Point(void)
{
	return ;
}

Point			&Point::operator=(Point const &rhs)
{
	const_cast<Fixed &>(this->_x) = rhs.getX();
	const_cast<Fixed &>(this->_y) = rhs.getY();
	return (*this);
}

Fixed		Point::getX(void) const
{
	return (this->_x);
}
Fixed 		Point::getY(void) const
{
	return (this->_y);
}
