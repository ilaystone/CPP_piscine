/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.template.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 11:25:48 by ikhadem           #+#    #+#             */
/*   Updated: 2021/11/07 09:19:21 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_TEMPLATE_HPP
#define ITER_TEMPLATE_HPP

#include <string>

template<typename T>
void	iter(T *arr_add, size_t size, void (*f)(T &))
{
	for (size_t i = 0; i < size; i++)
	{
		(*f)(arr_add[i]);
	}
}

#endif
