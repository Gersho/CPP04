/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 16:47:23 by kzennoun          #+#    #+#             */
/*   Updated: 2021/10/07 18:47:19 by kzennoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog: public AAnimal
{

	public:

		Dog();
		Dog( Dog const & src );
		~Dog();
		void	change_idea(int num, std::string new_idea);
		std::string get_idea(int num) const;
		virtual void	makeSound() const;
		virtual Dog &		operator=( Dog const & rhs );

	private:
		Brain* brain;
		//Brain* brain = NULL;
};


#endif /* ************************************************************* DOG_H */