/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 16:47:02 by kzennoun          #+#    #+#             */
/*   Updated: 2021/10/06 17:28:50 by kzennoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat()
{
	_type = "Cat";
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat( const Cat & src )
{
	*this = src;
	std::cout << "Cat copy constructor called" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat &				Cat::operator=( Cat const & rhs )
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

void Cat::makeSound() const
{
	std::cout << _type << ": MiaouMiaou" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */