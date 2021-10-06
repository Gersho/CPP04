/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 16:47:23 by kzennoun          #+#    #+#             */
/*   Updated: 2021/10/06 17:27:48 by kzennoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"

class Dog: public Animal
{

	public:

		Dog();
		Dog( Dog const & src );
		~Dog();

		virtual void	makeSound() const;
		Dog &		operator=( Dog const & rhs );

	private:

};


#endif /* ************************************************************* DOG_H */