/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 10:56:23 by ikhadem           #+#    #+#             */
/*   Updated: 2021/10/14 11:24:07 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int		main(void)
{
	try
	{
		Bureaucrat		a("a", 1);
		// Bureaucrat		b("b", 0);
		// Bureaucrat		c("c", 800);
		a.decrementGrade();
		// a.incrementGrade();
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << e.what();
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << e.what();
	}
	return (0);
}