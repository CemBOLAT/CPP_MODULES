/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:10:50 by cbolat            #+#    #+#             */
/*   Updated: 2023/09/16 18:46:37 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

/*
int main()
{
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();

	delete j;//should not create a leak
	delete i;

	return 0;
}
*/


# define MAX_ANIMALS 4

int main(){
	Dog	dog = Dog();
	Cat	cat = Cat();
	Dog	dog2 = Dog(dog);
	Cat	cat2 = Cat(cat);
	Dog	dog3 = Dog();
	cat2 = cat;
	dog3 = dog;
	
	AAnimal	**animals = new AAnimal*[MAX_ANIMALS];

	for (int i = 0; i < MAX_ANIMALS / 2; i++)
		animals[i] = new Dog();
	for (int i = MAX_ANIMALS / 2; i < MAX_ANIMALS; i++)
		animals[i] = new Cat();
	for (int i = 0; i < MAX_ANIMALS; i++)
		delete animals[i];
	delete [] animals;
	return 0;
}
