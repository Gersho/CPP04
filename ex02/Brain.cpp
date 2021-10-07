/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 11:10:57 by kzennoun          #+#    #+#             */
/*   Updated: 2021/10/07 17:00:51 by kzennoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
	int i;

	i = 0;
	while (i < 100)
	{
		ideas[i] = "*brainfart*";
		i++;
	}
}

Brain::Brain( const Brain & src )
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Brain &				Brain::operator=( Brain const & rhs )
{
	std::cout << "Brain operator = called" << std::endl;
	if ( this != &rhs )
	{
		int i;

		i = 0;
		while (i < 100)
		{
			ideas[i] = rhs.get_idea(i);
			i++;
		}
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Brain const & i )
{
	int j;
	std::cout << "Brain operator << called" << std::endl;
	j = 0;
	while (j < 100)
	{
		std::cout << i.get_idea(j) << std::endl;
		j++;
	}

	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/



/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string Brain::get_idea(int num) const
{
	return ideas[num];
}

void	Brain::change_idea(int num, std::string new_idea)
{
	ideas[num] = new_idea;
	return;
}


/* ************************************************************************** */