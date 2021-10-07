/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 16:47:04 by kzennoun          #+#    #+#             */
/*   Updated: 2021/10/07 18:47:19 by kzennoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat: public AAnimal
{

	public:

		Cat();
		Cat( Cat const & src );
		~Cat();

		std::string get_idea(int num) const;
		void	change_idea(int num, std::string new_idea);
		virtual void	makeSound() const;
		virtual Cat &		operator=( Cat const & rhs );

	private:
		Brain* brain;
		//Brain* brain = NULL;
};


#endif /* ************************************************************* CAT_H */