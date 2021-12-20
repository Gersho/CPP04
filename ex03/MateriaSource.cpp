/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 11:37:31 by kzennoun          #+#    #+#             */
/*   Updated: 2021/12/20 14:49:56 by kzennoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource default constructor called" << std::endl;
	int i = 0;

	while (i < 4)
	{
		storage[i] = NULL;
		i++;
	}
}

MateriaSource::MateriaSource( const MateriaSource & src )
{
	std::cout << "MateriaSource copy constructor called" << std::endl;
	int i = 0;

	while (i < 4)
	{
		storage[i] = NULL;
		i++;
	}
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource default destructor called" << std::endl;
	int i = 0;

	while (i < 4)
	{
		if (storage[i])
			delete(storage[i]);
		i++;
	}
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

MateriaSource &				MateriaSource::operator=( MateriaSource const & rhs )
{
	std::cout << "MateriaSource operator = called" << std::endl;
	if ( this != &rhs )
	{
		int i = 0;


		while (i < 4)
		{
			if (storage[i] != NULL)
				delete(storage[i]);
			storage[i] = rhs.storage[i]->clone();
			i++;
		}
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void MateriaSource::learnMateria(AMateria* m)
{
	int i = 0;

	while (i < 4)
	{
		if (storage[i] == NULL)
		{
			storage[i] = m;
			break ;
		}
		i++;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	int i = 0;

	while (i < 4)
	{
		if (storage[i] && type == storage[i]->getType())
		{
			AMateria* tmp;

			tmp = storage[i]->clone();
			return tmp;
		}

		i++;
	}
	return (0);
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */