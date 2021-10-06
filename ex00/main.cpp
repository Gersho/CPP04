/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 16:38:07 by kzennoun          #+#    #+#             */
/*   Updated: 2021/10/06 17:40:56 by kzennoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include <iostream>
#include <string>

int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();


std::cout << std::endl << std::endl;

const WrongAnimal* metab = new WrongAnimal();
const WrongAnimal* k = new WrongCat();
std::cout << k->getType() << " " << std::endl;
k->makeSound(); //will output the cat sound!
metab->makeSound();

}