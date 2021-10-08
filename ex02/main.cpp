/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 16:38:07 by kzennoun          #+#    #+#             */
/*   Updated: 2021/10/08 14:41:09 by kzennoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>
#include <string>

int main()
{
	const int size = 6;
	AAnimal* pack[size];
	//AAnimal bob = new AAnimal();
	
	int i = 0;

	while (i < size)
	{
		if (i % 2)
		{
			pack[i] = new Dog();
		}
		else
		{
			pack[i] = new Cat();
		}
		i++;
	}

	// pack[0]->makeSound(); //Miaou
	// pack[2]->makeSound(); //Miaou
	std::cout << std::endl;
	std::cout <<
	((Cat*)pack[0])->get_idea(0) << std::endl;
	std::cout <<
	((Cat*)pack[2])->get_idea(0) << std::endl;
	std::cout << "change pack[0]" <<  std::endl;
	((Cat*)pack[0])->change_idea(0, "blabla");
	std::cout <<
	((Cat*)pack[0])->get_idea(0) << std::endl;
	std::cout <<
	((Cat*)pack[2])->get_idea(0) << std::endl;
	std::cout << std::endl;

	std::cout << "pack[0]ptr: "<< reinterpret_cast<void *>(pack[0]) << std::endl;	
	std::cout << "pack[2]ptr: "<< reinterpret_cast<void *>(pack[2]) << std::endl;	
	std::cout << "copy pack[0] to pack[2]" << std::endl;

	//copie les ptr
	//pack[2] = pack[0];

	//call AAnimal= operator
	//*pack[2] = *pack[0];
	// pack[2]->operator=(*pack[0]);
	//*pack[2] = *((Cat*)pack[0]);

	//call Cat= operator 
	//((Cat*)pack[2])->operator=(dynamic_cast<Cat&>(*pack[0]));
	((Cat*)pack[2])->operator=((Cat&)*pack[0]);


	std::cout << "pack[0]ptr: "<< reinterpret_cast<void *>(pack[0]) << std::endl;	
	std::cout << "pack[2]ptr: "<< reinterpret_cast<void *>(pack[2]) << std::endl;
	std::cout << std::endl;	
	std::cout <<
	((Cat*)pack[0])->get_idea(0) << std::endl;
	std::cout <<
	((Cat*)pack[2])->get_idea(0) << std::endl;
	std::cout << std::endl;

	i = 0;
	while (i < size)
	{
		//delete((AAnimal*)pack[i]);
		delete(pack[i]);
		i++;
	}


	
}