/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 18:56:18 by ikhadem           #+#    #+#             */
/*   Updated: 2021/10/15 19:10:50 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <ctime>

class Base
{
public:
	virtual ~Base(void) { return ; }
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base		*generate(void)
{
	std::srand((unsigned)time(NULL));
	int rand = (std::rand() % 3);

	if (rand == 0)
		return (new A());
	else if (rand == 1)
		return (new B());
	else
		return (new C());
}

void	identify(Base *p)
{
	std::cout << "Identify by pointers" << std::endl;
	A		*a = dynamic_cast<A *>(p);
	B		*b = dynamic_cast<B *>(p);
	C		*c = dynamic_cast<C *>(p);

	if (a != NULL)
		std::cout << "A" << std::endl;
	if (b != NULL)
		std::cout << "B" << std::endl;
	if (c != NULL)
		std::cout << "C" << std::endl;
}

void	identify(Base &p)
{
	std::cout << "Identify by reference" << std::endl;
	try {
		A	&a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << "A" << std::endl;
	}
	catch (std::bad_cast &bc) { }
	try {
		B	&b = dynamic_cast<B &>(p);
		(void)b;
		std::cout << "B" << std::endl;
	}
	catch (std::bad_cast &bc) { }
	try {
		C	&c = dynamic_cast<C &>(p);
		(void)c;
		std::cout << "C" << std::endl;
	}
	catch (std::bad_cast &bc) { }
}

int		main(void)
{
	Base		*b;

	b = generate();
	identify(b);
	identify(*b);
	return (0);
}