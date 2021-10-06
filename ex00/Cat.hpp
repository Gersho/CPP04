/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 16:47:04 by kzennoun          #+#    #+#             */
/*   Updated: 2021/10/06 17:27:44 by kzennoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"

class Cat: public Animal
{

	public:

		Cat();
		Cat( Cat const & src );
		~Cat();

		virtual void	makeSound() const;
		Cat &		operator=( Cat const & rhs );

	private:

};


#endif /* ************************************************************* CAT_H */