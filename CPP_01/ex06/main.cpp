/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:55:21 by cbolat            #+#    #+#             */
/*   Updated: 2023/09/15 15:29:10 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv) {

	if (argc != 2){
		std::cout << "Usage: ./harl [DEBUG, INFO, WARNING, ERROR]" << std::endl;
		return 0;
	}
	Harl harl;

	if (harl.validLevel(argv[1]) == 1){
		harl.complain(argv[1]);
	}
	

	return 0;
}
