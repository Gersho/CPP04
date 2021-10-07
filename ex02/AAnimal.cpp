/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 16:46:57 by kzennoun          #+#    #+#             */
/*   Updated: 2021/10/07 17:25:33 by kzennoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AAnimal::AAnimal(): _type("AAnimal")
{
	std::cout << "AAnimal default constructor called" << std::endl;
}

AAnimal::AAnimal( const AAnimal & src )
{
	*this = src;
	std::cout << "AAnimal copy constructor called" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AAnimal &				AAnimal::operator=( AAnimal const & rhs )
{
	std::cout << "AAnimal operator = called" << std::endl;
	if ( this != &rhs )
	{
		_type = rhs._type;
	}
	return *this;
}




/*
** --------------------------------- METHODS ----------------------------------
*/

void AAnimal::makeSound() const
{
	std::cout << _type << " ---AAnimal makeSound()---" << std::endl;
}

std::string AAnimal::getType() const
{
	return _type;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */