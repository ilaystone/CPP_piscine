/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:46:26 by ikhadem           #+#    #+#             */
/*   Updated: 2021/11/18 02:20:09 by ikhadem          ###   ########.fr       */
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
		throw Span::SpanOutOfBounds();
	this->_data.push_back(n);
	std::sort(this->_data.begin(), this->_data.end());
	return ;
}

int		Span::shortestSpan(void) const
{
	if (this->_size == 0 || this->_size == 1)
		throw (Span::SpanConnotCount());
	int		min_dist = std::numeric_limits<int>::max();
	for (int i = 0; i < (int)(this->_data.size() - 1); i++)
	{
		int		current = std::abs(this->_data[i] - this->_data[i + 1]);
		if (current < min_dist)
			min_dist = current;
	}
	return (min_dist);
}

int		Span::longestSpan(void) const
{
	int		max_value = *std::max_element(this->_data.begin(), this->_data.end());
	int		min_value = *std::min_element(this->_data.begin(), this->_data.end());
	return (std::abs(max_value - min_value));
}

