/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 10:56:23 by ikhadem           #+#    #+#             */
/*   Updated: 2021/10/14 12:21:39 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int		main(void)
{
	Bureaucrat		b1("b1", 1);
	Bureaucrat		b2("b2", 80);
	Form			f1("f1", 100, 80, false);
	Form			f2("f2", 10, 6, false);

	std::cout << f1;
	std::cout << f2;
	b1.SignForm(f1);
	b1.SignForm(f2);
	std::cout << f1;
	std::cout << f2;
	f1.setIsSigned(false);
	f2.setIsSigned(false);
	b2.SignForm(f1);
	b2.SignForm(f2);
	std::cout << f1;
	std::cout << f2;
	return (0);
}