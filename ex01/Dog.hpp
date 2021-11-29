/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 16:47:23 by kzennoun          #+#    #+#             */
/*   Updated: 2021/11/29 17:36:46 by kzennoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal
{

	public:

		Dog();
		Dog( Dog const & src );
		~Dog();
		void	change_idea(int num, std::string new_idea);
		std::string get_idea(int num) const;
		void	makeSound() const;
		Dog &		operator=( Dog const & rhs );

	private:
		Brain* brain;
};


#endif /* ************************************************************* DOG_H */