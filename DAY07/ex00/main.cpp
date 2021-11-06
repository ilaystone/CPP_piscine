/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 09:35:30 by ikhadem           #+#    #+#             */
/*   Updated: 2021/11/06 11:24:25 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.template.hpp"
#include <iostream>
#include <string>

class Number
{
public:
	std::string		alphaValue;
	int				value;

	Number() : alphaValue(), value(0) { return ; }
	Number(std::string a, int v) : alphaValue(a), value(v)
	{
		return ;
	}
	~Number(void) { return ; }
	bool		operator<(Number const &rhs) const
	{
		return (this->value < rhs.value);
	}
	bool		operator>(Number const &rhs) const
	{
		return (this->value > rhs.value);
	}
	Number const	&operator=(Number const &rhs)
	{
		this->alphaValue = rhs.alphaValue;
		this->value = rhs.value;
		return (*this);
	}
};

std::ostream&	operator<<(std::ostream& os, const Number &rhs)
{
	os << "(" << rhs.alphaValue;
	os << " ," << rhs.value << ")";
	return (os);
}

int		main()
{
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::cout << std::endl << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	std::cout << std::endl << std::endl;
	Number		e("Two", 2);
	Number		f("Three", 3);
	::swap(e, f);
	std::cout << "e = " << e << ", f = " << f << std::endl;
	std::cout << "min( e, f ) = " << ::min( e, f ) << std::endl;
	std::cout << "max( e, f ) = " << ::max( e, f ) << std::endl;
	return (0);
}