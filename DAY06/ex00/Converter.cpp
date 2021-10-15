/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 13:01:24 by ikhadem           #+#    #+#             */
/*   Updated: 2021/10/15 13:46:40 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

Converter::Converter(void)
{
	return ;
}

Converter::Converter(std::string const &sl) :
_string_literal(sl)
{
	return ;
}

Converter::Converter(Converter const &rhs)
{
	*this = rhs;
	return ;
}

Converter::~Converter(void)
{
	return ;
}

Converter		&Converter::operator=(Converter const &rhs)
{
	this->_string_literal = rhs._string_literal;
	return (*this);
}

Converter::operator char(void) const
{
	int		c = 0;

	try
	{
		c = std::stoi(this->_string_literal);
	}
	catch (std::exception &e)
	{
		throw(Converter::CannotCovertException());
	}
	if (!std::isprint(c))
		throw (Converter::NonDisplayableException());
	return (static_cast<char>(c));
}

Converter::operator int(void) const
{
	int		i = 0;

	try
	{
		i = std::stoi(this->_string_literal);
	}
	catch (std::exception &e)
	{
		throw(Converter::CannotCovertException());
	}
	return (static_cast<int>(i));
}

Converter::operator float(void) const
{
	float	f = 0.0f;

	try
	{
		f = std::stof(this->_string_literal);
	}
	catch (std::exception &e)
	{
		throw(Converter::CannotCovertException());
	}
	return (static_cast<float>(f));
}

Converter::operator double(void) const
{
	double		d = 0.0;

	try
	{
		d = std::stod(this->_string_literal);
	}
	catch (std::exception &e)
	{
		throw(Converter::CannotCovertException());
	}
	return (static_cast<double>(d));
}
