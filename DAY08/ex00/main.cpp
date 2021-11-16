/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 12:01:43 by ikhadem           #+#    #+#             */
/*   Updated: 2021/11/09 11:21:36 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "EasyFind.template.hpp"
#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <stack>

int		main(void)
{
	std::cout << "VECTOR :" << std::endl;
	std::vector<int>	a;

	a.push_back(1);
	a.push_back(2);
	a.push_back(3);
	try
	{
		std::cout << *(easyFind(a, 5)) << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << *(easyFind(a, 1)) << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << *(easyFind(a, 2)) << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << *(easyFind(a, 3)) << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "List :" << std::endl;
	std::list<int>	b;

	b.push_back(1);
	b.push_back(2);
	b.push_back(3);
	try
	{
		std::cout << *(easyFind(b, 5)) << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << *(easyFind(b, 1)) << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << *(easyFind(b, 2)) << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << *(easyFind(b, 3)) << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "Deque :" << std::endl;
	std::deque<int>	c;

	c.push_back(1);
	c.push_back(2);
	c.push_back(3);
	try
	{
		std::cout << *(easyFind(c, 5)) << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << *(easyFind(c, 1)) << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << *(easyFind(c, 2)) << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << *(easyFind(c, 3)) << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}