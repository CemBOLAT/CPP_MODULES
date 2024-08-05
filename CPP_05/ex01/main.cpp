/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 18:09:53 by cbolat            #+#    #+#             */
/*   Updated: 2023/10/27 14:45:11 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main(){

	std::cout << "----------TEST 1-----------" << std::endl;
	{
		try {
			Form	form = Form("Form1", -12, 33);
			std::cout << form << std::endl;
			Bureaucrat	bureaucrat1 = Bureaucrat("Bureaucrat1", 36);
			std::cout << bureaucrat1 << std::endl;
			Bureaucrat	bureaucrat2 = Bureaucrat("Bureaucrat2", 32);
			std::cout << bureaucrat2 << std::endl;
			bureaucrat2.signForm(form);
			std::cout << form << std::endl;
			bureaucrat1.signForm(form);
			std::cout << form << std::endl;
			std::cout << "1111111" << std::endl;
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "---------------------------" << std::endl;
	std::cout << "----------TEST 2-----------" << std::endl;
	{
		try {
			Form	form2 = Form("Form2", 35, 33);
			std::cout << form2 << std::endl;
			Bureaucrat	bureaucrat3 = Bureaucrat("Bureaucrat3", 36);
			std::cout << bureaucrat3 << std::endl;
			Bureaucrat	bureaucrat4 = Bureaucrat("Bureaucrat4", 32);
			std::cout << bureaucrat4 << std::endl;
			bureaucrat3.signForm(form2);
			std::cout << form2 << std::endl;
			bureaucrat4.signForm(form2);
			std::cout << form2 << std::endl;
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "---------------------------" << std::endl;
	std::cout << "----------TEST 3-----------" << std::endl;
	{
		try{
			Form	form3 = Form("Form3", 235, 33);
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "---------------------------" << std::endl;
	std::cout << "----------TEST 4-----------" << std::endl;
	{
		try {
			Form	form3 = Form("Form4", 0, 33);
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
}
