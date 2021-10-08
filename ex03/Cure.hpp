/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 13:06:46 by kzennoun          #+#    #+#             */
/*   Updated: 2021/10/08 16:34:30 by kzennoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure: public AMateria
{

	public:

		Cure();
		Cure( Cure const & src );
		~Cure();

		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
		Cure &		operator=( Cure const & rhs );

	private:

};

#endif /* ************************************************************ CURE_H */