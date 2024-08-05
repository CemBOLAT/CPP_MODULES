/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 18:09:53 by cbolat            #+#    #+#             */
/*   Updated: 2023/10/27 14:37:11 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(){

	std::cout << "------ Test 1 ------" << std::endl;
	try {
		Bureaucrat Bureaucrat1 = Bureaucrat("Bureaucrat1", 1554);
		std::cout << Bureaucrat1 << std::endl;
		Bureaucrat Bureaucrat2 = Bureaucrat("Bureaucrat2", 3);
		std::cout << Bureaucrat2 << std::endl;
		Bureaucrat2.incrementGrade(2);
		std::cout << Bureaucrat2 << std::endl;
		Bureaucrat Bureaucrat3 = Bureaucrat("Bureaucrat3", 151);
		std::cout << Bureaucrat3 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "--------------------" << std::endl;
	std::cout << "------ Test 2 ------" << std::endl;
	try {
		Bureaucrat Bureaucrat4 = Bureaucrat("Bureaucra4", 149);
		std::cout << Bureaucrat4 << std::endl;
		Bureaucrat4.incrementGrade(2);
		std::cout << Bureaucrat4 << std::endl;
		Bureaucrat4.decrementGrade(2);
		std::cout << Bureaucrat4 << std::endl;
		Bureaucrat4.decrementGrade(149);
		std::cout << Bureaucrat4 << std::endl;
		Bureaucrat4.incrementGrade(149);
		std::cout << Bureaucrat4 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "--------------------" << std::endl;
}
