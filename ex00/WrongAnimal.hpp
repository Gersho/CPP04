/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 17:30:33 by kzennoun          #+#    #+#             */
/*   Updated: 2021/10/06 17:32:00 by kzennoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal
{

	public:

		WrongAnimal();
		WrongAnimal( WrongAnimal const & src );
		~WrongAnimal();

		void	makeSound() const;
		std::string			getType() const;
		WrongAnimal &		operator=( WrongAnimal const & rhs );

	protected:
		std::string	_type;
	private:

};



#endif /* ***************************************************** WRONGANIMAL_H */