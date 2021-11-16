/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:46:40 by ikhadem           #+#    #+#             */
/*   Updated: 2021/11/13 04:05:46 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <algorithm>
#include <vector>
#include <iterator>

class Span
{
	class SpanFullException : public std::exception
	{
	public:
		virtual const char	*what() const throw()
		{
			return ("input overflows size");
		}
	};
private:
	unsigned int		_size;
	std::vector<int>	_data;

	Span(void);
public:
	Span(unsigned int n);
	Span(Span const &rhs);
	~Span(void);

	Span	&operator=(Span const &rhs);

	int		getSize(void) const;

	void	addNumber(int n);
	template<class IterType>
	void	addNumber(IterType first, IterType last);
	int		shortestSpan(void) const;
	int		longestSpan(void) const;
};

template < class IterType >
void	Span::addNumber(IterType first, IterType last)
{
	this->_data.insert(this->_data.end(), first, last);
	return ;
}

#endif