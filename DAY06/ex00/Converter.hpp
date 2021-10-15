/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 13:01:04 by ikhadem           #+#    #+#             */
/*   Updated: 2021/10/15 13:47:38 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
#define CONVERTER_HPP

#include <iostream>
#include <string>

class Converter
{
private:
	std::string		_string_literal;
	Converter(void);
public:
	class CannotCovertException : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return ("impossible");
		}
	};
	class NonDisplayableException : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return ("Non displayable");
		}
	};
	Converter(std::string const &sl);
	Converter(Converter const &rhs);
	~Converter(void);

	Converter		&operator=(Converter const &rhs);
	operator char(void) const;
	operator int(void) const;
	operator float(void) const;
	operator double(void) const;
};

#endif