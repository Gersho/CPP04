/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 12:45:42 by kzennoun          #+#    #+#             */
/*   Updated: 2021/12/22 13:54:16 by kzennoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"


int main()
{
	IMateriaSource* src = new MateriaSource();

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	std::cout << std::endl;
	me->use(0, *bob);
	me->use(1, *bob);
	
	std::cout << std::endl;
	std::cout << std::endl;

	Character *test = new Character("test");
	tmp = src->createMateria("cure");
	test->equip(tmp);
	tmp = src->createMateria("ice");
	test->equip(tmp);
	Character test2(*test);
	Character *test3 = new Character(*test);
	
	std::cout << std::endl;
	test->use(0, *bob);
	test->use(1, *bob);
	std::cout << std::endl;
	delete test;

	std::cout << std::endl;
	test2.use(0, *bob);
	test2.use(1, *bob);
	std::cout << std::endl;

	std::cout << std::endl;
	test3->use(0, *bob);
	test3->use(1, *bob);
	std::cout << std::endl;
	delete test3;

	delete bob;
	delete me;
	delete src;
	return 0;
}