/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 17:30:35 by kzennoun          #+#    #+#             */
/*   Updated: 2021/10/06 17:39:42 by kzennoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongAnimal::WrongAnimal(): _type("WrongAnimal")
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal & src )
{
	*this = src;
	std::cout << "WrongAnimal copy constructor called" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongAnimal &				WrongAnimal::operator=( WrongAnimal const & rhs )
{
	if ( this != &rhs )
	{
		_type = rhs._type;
	}
	return *this;
}




/*
** --------------------------------- METHODS ----------------------------------
*/

void WrongAnimal::makeSound() const
{
	std::cout << _type << " ---WrongAnimal makeSound()---" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return _type;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */