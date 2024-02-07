/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 19:23:59 by cbolat            #+#    #+#             */
/*   Updated: 2023/09/18 14:32:10 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	//std::string	str2 = "Cemal Bolat";
	//stringREF = str2;
	//stringPTR = &str2;
	//str = str2;

	std::cout << "• The memory address of the string variable. : " << &str << std::endl;
	std::cout << "• The memory address of the stringPTR variable. : " << stringPTR << std::endl;
	std::cout << "• The memory address of the stringREF variable. : " << &stringREF << std::endl;
	std::cout << "-----------------------------------------------" << std::endl;
	std::cout << "• The value of the string variable. " << str << std::endl;
	std::cout << "• The value of the stringPTR variable. " << *stringPTR << std::endl;
	std::cout << "• The value of the stringREF variable. " << stringREF << std::endl;


}
