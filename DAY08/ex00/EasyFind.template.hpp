/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EasyFind.template.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 14:51:09 by ikhadem           #+#    #+#             */
/*   Updated: 2021/11/09 10:42:57 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_TEMPLATE_HPP
#define EASYFIND_TEMPLATE_HPP

#include <memory>
#include <algorithm>

class ValueNotFoundException : public std::exception
{
public:
	virtual const char	*what() const throw()
	{
		return ("Value Not Found");
	}
};

template < template <typename, typename> class Container,
			typename Allocator >
typename Container<int, Allocator>::iterator	easyFind(Container<int, Allocator> & c, int val)
{
	typename Container<int, Allocator>::iterator	ret;

	ret = std::find(c.begin(), c.end(), val);
	if (*ret == val)
		return (ret);
	throw (ValueNotFoundException());
}

#endif