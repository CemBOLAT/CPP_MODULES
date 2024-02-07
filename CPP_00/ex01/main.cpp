/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 17:06:56 by cbolat            #+#    #+#             */
/*   Updated: 2023/09/17 23:18:39 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./PhoneBook.hpp"

int	main(){
	PhoneBook	phoneBook;

	while (1){
		std::cout << "Please enter a command (ADD, SEARCH, EXIT): ";
		std::string	command;

		getline(std::cin, command);
		if (command == "ADD")
			phoneBook.add();
		else if (command == "SEARCH")
			phoneBook.search();
		else if (command == "EXIT")
			break ;
		else
			std::cout << "Invalid command." << std::endl;
	}
}
