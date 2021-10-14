/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 09:49:44 by ikhadem           #+#    #+#             */
/*   Updated: 2021/10/14 10:14:09 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria		*_inv[4];
	bool			_empty_pos[4];
public :
	MateriaSource(void);
	MateriaSource(MateriaSource const &rhs);
	~MateriaSource(void);

	MateriaSource		&operator=(MateriaSource const &rhs);

	virtual void		learnMateria(AMateria *m);
	virtual AMateria	*createMateria(std::string const &type);
};

#endif