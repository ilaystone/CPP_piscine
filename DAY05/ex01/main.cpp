/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 10:56:23 by ikhadem           #+#    #+#             */
/*   Updated: 2021/11/15 23:23:15 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int		main(void)
{
	{
		Bureaucrat		b1("b1", 1);
		Form			f1("f1", 100, 80);
		Form			f2("f2", 10, 6);
		std::cout << f1 << std::endl;
		std::cout << f2 << std::endl;
		b1.SignForm(f1);
		b1.SignForm(f2);
		std::cout << f1 << std::endl;
		std::cout << f2 << std::endl;
	}
	std::cout << std::endl;
	{
		Bureaucrat		b2("b2", 80);
		Form			f1("f1", 100, 80);
		Form			f2("f2", 10, 6);
		b2.SignForm(f1);
		b2.SignForm(f2);
		std::cout << f1 << std::endl;
		std::cout << f2 << std::endl;
	
	}
	return (0);
}