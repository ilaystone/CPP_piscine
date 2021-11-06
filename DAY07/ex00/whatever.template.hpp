/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.template.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 09:35:13 by ikhadem           #+#    #+#             */
/*   Updated: 2021/11/06 11:19:58 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_TEMPLATE_HPP
#define WHATEVER_TEMPLATE_HPP

template <typename T>
void	swap(T &v1, T &v2)
{
	T	tmp;

	tmp = v1;
	v1 = v2;
	v2 = tmp;
	return ;
}

template <typename T>
T	&max(T &v1, T &v2)
{
	return (v1 > v2 ? v1 : v2);
}

template <typename T>
T	&min(T &v1, T &v2)
{
	return (v1 < v2 ? v1 : v2);
}

#endif