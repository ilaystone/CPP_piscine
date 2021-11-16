/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:46:26 by ikhadem           #+#    #+#             */
/*   Updated: 2021/11/13 04:05:44 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int n)
{
	this->_size = n;
	return ;
}

Span::~Span(void)
{
	return ;
}

Span::Span(Span const &rhs)
{
	*this = rhs;
	return ;
}

Span	&Span::operator=(Span const &rhs)
{
	this->_size = rhs.getSize();
	return (*this);
}

int		Span::getSize(void) const
{
	return (this->_size);
}

void	Span::addNumber(int n)
{
	if (this->_data.size() == this->_size)
		throw Span::SpanFullException();
	this->_data.push_back(n);
	return ;
}

int		Span::shortestSpan(void) const
{
	return (*(std::min_element(this->_data.begin(), this->_data.end())));
}

int		Span::longestSpan(void) const
{
	return (*(std::max_element(this->_data.begin(), this->_data.end())));
}

