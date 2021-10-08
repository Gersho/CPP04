/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 11:37:06 by kzennoun          #+#    #+#             */
/*   Updated: 2021/10/08 17:00:44 by kzennoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AMateria::AMateria()
{
	std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria( const AMateria & src )
{
	std::cout << "AMateria copy constructor called" << std::endl;
	*this = src;
}

AMateria::AMateria(std::string const & type): _type(type)
{
	std::cout << "AMateria string constructor called" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AMateria::~AMateria()
{
	std::cout << "AMateria destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AMateria &				AMateria::operator=( AMateria const & rhs )
{
	std::cout << "AMateria operator = called" << std::endl;
	if ( this != &rhs )
	{
		this->_type = rhs.getType();
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void AMateria::use(ICharacter& target)
{
	(void)target;
	return;
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/


std::string const & AMateria::getType() const
{
	return _type;
}

/* ************************************************************************** */