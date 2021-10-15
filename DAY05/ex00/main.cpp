/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 10:56:23 by ikhadem           #+#    #+#             */
/*   Updated: 2021/10/15 08:48:43 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int		main(void)
{
	Bureaucrat		a("a", 15);
	Bureaucrat		b("b", -10);
	Bureaucrat		c("c", 150);
	Bureaucrat		d("d", 1);
	Bureaucrat		e("e", 200);

	std::cout << a.getName() << ": " << a.getGrade() << std::endl;
	a.incrementGrade();
	std::cout << a.getName() << ": " << a.getGrade() << std::endl;
	a.decrementGrade();
	std::cout << a.getName() << ": " << a.getGrade() << std::endl;

	std::cout << c.getName() << ": " << c.getGrade() << std::endl;
	c.decrementGrade();
	std::cout << c.getName() << ": " << c.getGrade() << std::endl;
	c.incrementGrade();
	std::cout << c.getName() << ": " << c.getGrade() << std::endl;

	std::cout << d.getName() << ": " << d.getGrade() << std::endl;
	d.incrementGrade();
	std::cout << d.getName() << ": " << d.getGrade() << std::endl;
	d.decrementGrade();
	std::cout << d.getName() << ": " << d.getGrade() << std::endl;
	return (0);
}