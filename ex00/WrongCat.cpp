/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 17:30:31 by kzennoun          #+#    #+#             */
/*   Updated: 2021/10/06 17:37:59 by kzennoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongCat::WrongCat()
{
	_type = "WrongCat";
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat( const WrongCat & src )
{
	*this = src;
	std::cout << "WrongCat copy constructor called" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongCat &				WrongCat::operator=( WrongCat const & rhs )
{
	if ( this != &rhs )
	{
		WrongAnimal::operator=(rhs);
	}
	return *this;
}



/*
** --------------------------------- METHODS ----------------------------------
*/

void WrongCat::makeSound() const
{
	std::cout << _type << ": MiaouMiaou" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */