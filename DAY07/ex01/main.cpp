/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 11:26:43 by ikhadem           #+#    #+#             */
/*   Updated: 2021/11/07 09:22:46 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.template.hpp"
#include <iostream>
#include <string.h>

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

void	fct1(int &i)
{
	i = i * 2;
}

template<typename T>
void	disp(T v)
{
	std::cout << v << std::endl;
}

int		main(void)
{
	int a[] = {1, 2, 3, 4, 5};
	::iter(a, 5, &fct1);
	::iter(a, 5, &disp);
	std::cout << std::endl;
	Number	b[5];
	b[0] = Number("one", 1);
	b[1] = Number("two", 2);
	b[2] = Number("three", 3);
	b[3] = Number("four", 4);
	b[4] = Number("five", 5);
	::iter(b, 5, &disp);
	return (0);
}