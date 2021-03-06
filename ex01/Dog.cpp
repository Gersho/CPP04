/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 16:47:02 by kzennoun          #+#    #+#             */
/*   Updated: 2021/12/22 13:26:19 by kzennoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog()
{
	_type = "Dog";
	brain = new Brain();
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog( const Dog & src )
{
	std::cout << "Dog copy constructor called" << std::endl;
	brain = new Brain();
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
	delete(brain);
	std::cout << "Dog destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog &				Dog::operator=( Dog const & rhs )
{
	std::cout << "Dog operator = called" << std::endl;
	if ( this != &rhs )
	{
		Animal::operator=(rhs);
		int i;
		i = 0;

		while (i < 100)
		{
			brain->change_idea(i, rhs.brain->get_idea(i));
			i++;
		}

	}
	return *this;
}



/*
** --------------------------------- METHODS ----------------------------------
*/

void Dog::makeSound() const
{
	std::cout << _type << ": MiaouMiaou" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string Dog::get_idea(int num) const
{
	return brain->get_idea(num);
}

void	Dog::change_idea(int num, std::string new_idea)
{
	brain->change_idea(num, new_idea);
	return;
}

/* ************************************************************************** */