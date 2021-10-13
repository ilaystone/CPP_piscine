/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 08:39:01 by ikhadem           #+#    #+#             */
/*   Updated: 2021/10/12 11:49:17 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed	s1 = c.getY() - a.getY();
	Fixed	s2 = c.getX() - a.getX();
	Fixed	s3 = b.getY() - a.getY();
	Fixed	s4 = point.getY() - a.getY();

	Fixed	w1 = (a.getX() * s1 + s4 * s2 - point.getX() * s1);
	w1 = w1 / (s3 * s2 - (b.getX() - a.getX()) * s1);
	Fixed	w2 = (s4 - w1 * s3) / s1;
	return (w1 > 0 && w2 > 0 && (w1 + w2) < 1);
}
