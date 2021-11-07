/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.template.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 09:24:57 by ikhadem           #+#    #+#             */
/*   Updated: 2021/11/07 10:29:44 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TEMPLATE_HPP
#define ARRAY_TEMPLATE_HPP

template<typename T>
class Array
{
private:
	std::size_t		_size;
	T				*_arr;
public:
	class ArrayOutOfBoundsException : public std::exception
	{
	public:
		virtual const char	*what() const throw()
		{
			return ("Array out of boundary");
		}
	};
	Array(void): _size(0), T(nullptr) { }
	Array(unsigned int n) : _size(n)
	{
		this->_arr = new T[this->_size];
		return ;
	}
	Array(Array const &rhs)
	{
		*this = rhs;
		return ;
	}
	~Array(void)
	{
		delete [] this->_arr;
		return ;
	}

	Array			&operator=(Array const &rhs)
	{
		this->_size = rhs.size();
		this->_arr = new T[rhs.size()];
		for (std::size_t i = 0; i < this->size(); i++)
		{
			this->_arr[i] = rhs._arr[i];
		}
		return (*this);
	}
	T				&operator[](std::size_t i)
	{
		if (i >= 0 && i < this->_size)
			return (this->_arr[i]);
		else
			throw Array::ArrayOutOfBoundsException();
	}
	std::size_t		size(void) const
	{
		return (this->_size);
	}
};

#endif