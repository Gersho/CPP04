/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 11:37:13 by kzennoun          #+#    #+#             */
/*   Updated: 2021/12/22 13:54:22 by kzennoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Character::Character(): _name("Bob")
{
	std::cout << "Character default constructor called" << std::endl;
	int i = 0;

	while (i < 4)
	{
		inv[i] = NULL;
		i++;
	}
}

Character::Character( const Character & src )
{
	std::cout << "Character copy constructor called" << std::endl;
	int i = 0;

	while (i < 4)
	{
		inv[i] = NULL;
		i++;
	}
	*this = src;
}

Character::Character(std::string name): _name(name)
{
	int i = 0;

	while (i < 4)
	{
		inv[i] = NULL;
		i++;
	}
	std::cout << "Character string constructor called" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Character::~Character()
{
	std::cout << "Character default destructor called" << std::endl;
	int i = 0;

	while (i < 4)
	{
		if (inv[i])
			delete(inv[i]);
		i++;
	}
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Character &				Character::operator=( Character const & rhs )
{
	std::cout << "Character operator = called" << std::endl;
	if ( this != &rhs )
	{
		this->_name = rhs.getName();
		int i = 0;


		while (i < 4)
		{
			if (inv[i] != NULL)
				delete(inv[i]);
			if (rhs.inv[i])
				inv[i] = rhs.inv[i]->clone();
			i++;
		}
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

std::string const & Character::getName() const
{
	return _name;
}

void Character::equip(AMateria* m)
{
	int i = 0;

	if (!m)
		return;

	while (i < 4)
	{
		if (inv[i] == NULL)
		{
			inv[i] = m;
			std::cout << "Materia " << m->getType() << " equipped in slot " << i << std::endl;
			break ;
		}
		i++;
	}
}

void Character::unequip(int idx)
{
	if (idx > 3 || inv[idx] == NULL)
		return;
	inv[idx] = NULL;
	std::cout << "Materia in slot " << idx << " unequiped" << std::endl;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx > 3 || inv[idx] == NULL)
		return;

	inv[idx]->use(target);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */