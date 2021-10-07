/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 16:47:00 by kzennoun          #+#    #+#             */
/*   Updated: 2021/10/07 17:36:21 by kzennoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef AAnimal_HPP
# define AAnimal_HPP

# include <iostream>
# include <string>

class AAnimal
{

	public:

		AAnimal();
		AAnimal( AAnimal const & src );
		virtual ~AAnimal();

		virtual void	makeSound() const = 0;
		std::string			getType() const;
		AAnimal &		operator=( AAnimal const & rhs );
	protected:
		std::string	_type;
		
	private:

};

#endif /* ********************************************************** AAnimal_H */