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
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;//should not create a leak
	delete i;

	return 0;
}
*/


# define MAX_ANIMALS 4

int main(){
	Animal	*(animals[MAX_ANIMALS]);

	for (int i = 0; i < MAX_ANIMALS / 2; i++)
		animals[i] = new Dog();
	for (int i = MAX_ANIMALS / 2; i < MAX_ANIMALS; i++)
		animals[i] = new Cat();
	for (int i = 0; i < MAX_ANIMALS; i++)
		delete animals[i];
	return 0;
}
