/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 18:09:53 by cbolat            #+#    #+#             */
/*   Updated: 2023/10/23 12:15:32 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


int main(){
	std::cout << "-------- Test 1 -------" << std::endl;
	{
		try {
			ShrubberyCreationForm	form = ShrubberyCreationForm("Form1");
			std::cout << form << std::endl;
			Bureaucrat	bureaucrat1 = Bureaucrat("Bureaucrat1", 36);
			std::cout << bureaucrat1 << std::endl;
			Bureaucrat	bureaucrat2 = Bureaucrat("Bureaucrat2", 32);
			std::cout << bureaucrat2 << std::endl;
			bureaucrat2.signForm(form);
			std::cout << form << std::endl;
			bureaucrat1.signForm(form);
			std::cout << form << std::endl;
			bureaucrat1.executeForm(form);
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "-----------------------" << std::endl;
	std::cout << "-------- Test 2 -------" << std::endl;
	{
		try {
			RobotomyRequestForm	form = RobotomyRequestForm("Form2");
			std::cout << form << std::endl;
			Bureaucrat	bureaucrat1 = Bureaucrat("Bureaucrat1", 36);
			std::cout << bureaucrat1 << std::endl;
			Bureaucrat	bureaucrat2 = Bureaucrat("Bureaucrat2", 32);
			std::cout << bureaucrat2 << std::endl;
			bureaucrat2.signForm(form);
			std::cout << form << std::endl;
			bureaucrat1.signForm(form);
			std::cout << form << std::endl;
			bureaucrat1.executeForm(form);
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "-----------------------" << std::endl;
	std::cout << "-------- Test 3 -------" << std::endl;
	{
		try {
			PresidentialPardonForm	form = PresidentialPardonForm("Form3");
			std::cout << form << std::endl;
			Bureaucrat	bureaucrat1 = Bureaucrat("Bureaucrat1", 36);
			std::cout << bureaucrat1 << std::endl;
			Bureaucrat	bureaucrat2 = Bureaucrat("Bureaucrat2", 32);
			std::cout << bureaucrat2 << std::endl;
			bureaucrat2.signForm(form);
			std::cout << form << std::endl;
			bureaucrat1.signForm(form);
			std::cout << form << std::endl;
			bureaucrat1.executeForm(form);
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "-----------------------" << std::endl;
	std::cout << "-------- Test 4 -------" << std::endl;
	{
		try {
			PresidentialPardonForm	form = PresidentialPardonForm("Form4");
			std::cout << form << std::endl;
			Bureaucrat	bureaucrat1 = Bureaucrat("Bureaucrat1", 2);
			std::cout << bureaucrat1 << std::endl;
			Bureaucrat	bureaucrat2 = Bureaucrat("Bureaucrat2", 32);
			std::cout << bureaucrat2 << std::endl;
			bureaucrat2.signForm(form);
			std::cout << form << std::endl;
			bureaucrat1.signForm(form);
			std::cout << form << std::endl;
			bureaucrat1.executeForm(form);
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
}
