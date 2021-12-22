/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 16:47:02 by kzennoun          #+#    #+#             */
/*   Updated: 2021/12/22 13:26:47 by kzennoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat()
{
	_type = "Cat";
	brain = new Brain();
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat( const Cat & src )
{
	std::cout << "Cat copy constructor called" << std::endl;
	brain = new Brain();
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat()
{
	delete(brain);
	std::cout << "Cat destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat &				Cat::operator=( Cat const & rhs )
{
	std::cout << "Cat operator = called" << std::endl;
	if ( this != &rhs )
	{
		AAnimal::operator=(rhs);
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

void Cat::makeSound() const
{
	std::cout << _type << ": MiaouMiaou" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string Cat::get_idea(int num) const
{
	return brain->get_idea(num);
}

void	Cat::change_idea(int num, std::string new_idea)
{
	brain->change_idea(num, new_idea);
	return;
}

/* ************************************************************************** */