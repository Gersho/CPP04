/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 16:47:13 by kzennoun          #+#    #+#             */
/*   Updated: 2021/10/06 17:28:59 by kzennoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog()
{
	_type = "Dog";
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog( const Dog & src )
{
	*this = src;
	std::cout << "Dog copy constructor called" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog &				Dog::operator=( Dog const & rhs )
{
	if ( this != &rhs )
	{
		Animal::operator=(rhs);
	}
	return *this;
}



/*
** --------------------------------- METHODS ----------------------------------
*/

void Dog::makeSound() const
{
	std::cout << _type << ": OuafOuaf" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */