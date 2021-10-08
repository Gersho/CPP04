/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 13:06:44 by kzennoun          #+#    #+#             */
/*   Updated: 2021/10/08 16:53:38 by kzennoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cure::Cure(): AMateria("cure")
{
	std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure( const Cure & src )
{
	std::cout << "Cure copy constructor called" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cure::~Cure()
{
	std::cout << "Cure default destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cure &				Cure::operator=( Cure const & rhs )
{
	std::cout << "Cure operator = called" << std::endl;
	if ( this != &rhs )
	{
		AMateria::operator=(rhs);
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

AMateria* Cure::clone() const
{
	AMateria* tmp = new Cure();

	return tmp;
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << " ’s wounds *" << std::endl;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */