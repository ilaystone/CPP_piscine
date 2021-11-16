/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 00:35:07 by ikhadem           #+#    #+#             */
/*   Updated: 2021/11/13 05:46:04 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>

#ifndef ELMNT_NBR
#define ELMNT_NBR 10000
#endif

int		main(void)
{
	std::vector<int>	testing_unit;
	Span				my_unit(ELMNT_NBR);
	int		random_number = 0;

	std::srand((unsigned)std::time(0));
	for (int i = 0; i < ELMNT_NBR; i++)
	{
		random_number = (std::rand() % 10) + 1;
		testing_unit.push_back(random_number);
	}
	my_unit.addNumber(testing_unit.begin(), testing_unit.end());
	std::cout << "Vector Results:" << std::endl;
	std::cout << "Min: " << *(std::min_element(testing_unit.begin(), testing_unit.end())) << std::endl;
	std::cout << "Max: " << *(std::max_element(testing_unit.begin(), testing_unit.end())) << std::endl;
	std::cout << "My Span Results:" << std::endl;
	std::cout << "Min: " << my_unit.shortestSpan() << std::endl;
	std::cout << "Max: " << my_unit.longestSpan() << std::endl;
	std::cout << "Subject Test" << std::endl;
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	std::cout << "Exception Test" << std::endl;
	try
	{
		sp.addNumber(0);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
