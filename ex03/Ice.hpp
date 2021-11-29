/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 13:06:52 by kzennoun          #+#    #+#             */
/*   Updated: 2021/10/09 12:28:27 by kzennoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"
# include "ICharacter.hpp"


class Ice: public AMateria
{

	public:

		Ice();
		Ice( Ice const & src );
		~Ice();

		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
		Ice &		operator=( Ice const & rhs );

	private:

};

#endif /* ************************************************************ ICE_H */