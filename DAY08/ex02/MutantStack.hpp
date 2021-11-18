/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 08:19:10 by ikhadem           #+#    #+#             */
/*   Updated: 2021/11/18 02:22:23 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTATED_STACK_HPP
#define MUTATED_STACK_HPP

#include <stack>

template < typename T >
class MutantStack : public std::stack< T, std::deque<T> >
{
private:
public:
	typedef typename std::deque<T>::iterator       iterator;

	iterator		begin(void)
		{
			return (this->c.begin());
		}

		iterator		end(void)
		{
			return (this->c.end());
		}
};

#endif