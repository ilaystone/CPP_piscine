/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 08:37:41 by ikhadem           #+#    #+#             */
/*   Updated: 2021/10/12 11:44:36 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include "Fixed.hpp"

class Point
{
private:
	Fixed const		_x;
	Fixed const		_y;

public:
	Point(void);
	Point(Fixed const x, Fixed const y);
	Point(float const x, float const y);
	Point(Point const &rhs);
	~Point(void);

	Point		&operator=(Point const &rhs);

	Fixed		getX(void) const;
	Fixed 		getY(void) const;
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif