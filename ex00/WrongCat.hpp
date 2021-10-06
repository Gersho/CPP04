/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 17:30:28 by kzennoun          #+#    #+#             */
/*   Updated: 2021/10/06 17:33:38 by kzennoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include <string>
# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{

	public:

		WrongCat();
		WrongCat( WrongCat const & src );
		~WrongCat();

		void makeSound() const;
		WrongCat &		operator=( WrongCat const & rhs );

	private:

};



#endif /* ******************************************************** WRONGCAT_H */