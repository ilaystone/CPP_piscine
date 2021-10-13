/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 08:31:34 by ikhadem           #+#    #+#             */
/*   Updated: 2021/10/12 11:46:28 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

int		main()
{
	Point	a(0.f, 0.f);
	Point	b(3.f, 0.f);
	Point	c(0.f, 3.f);

	Point	p1(1.0f, 1.0f); // inside
	Point	p2(1.0f, 3.0f); // outside
	Point	p3(0.0f, 0.0f); // vertix
	Point	p4(1.0f, 2.0f); // border
	std::cout << "Triangle: ABC" << std::endl;
	std::cout << "where: A(0, 0) B(3, 0) C(0, 3)" << std::endl;
	std::cout << "is p(1, 1) inside the triangle ? ";
	std::cout << (bsp(a, b, c, p1) ? "True" : "False") << std::endl;
	std::cout << "is p(1, 3) inside the triangle ? ";
	std::cout << (bsp(a, b, c, p2) ? "True" : "False") << std::endl;
	std::cout << "is p(0, 0) inside the triangle ? ";
	std::cout << (bsp(a, b, c, p3) ? "True" : "False") << std::endl;
	std::cout << "is p(1, 2) inside the triangle ? ";
	std::cout << (bsp(a, b, c, p4) ? "True" : "False") << std::endl;
	return (0);
}
