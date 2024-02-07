/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:52:17 by cbolat            #+#    #+#             */
/*   Updated: 2024/02/07 20:39:20 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <cstring>

Harl::Harl(void) {
	std::cout << "Harl is created." << std::endl;
}

Harl::~Harl(void) {
	std::cout << "Harl is died." << std::endl;
}

void	Harl::debug(void) {
	std::cout << DEBUG << std::endl;
}

void	Harl::info(void) {
	std::cout << INFO << std::endl;
}

void	Harl::warning(void) {
	std::cout << WARNING << std::endl;
}

void	Harl::error(void) {
	std::cout << ERROR << std::endl;
}

void	Harl::complain(std::string level){
	std::string	*levels = new std::string[4];

	void (Harl::*funcs[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	int		i = 0;

	levels[0] = "debug";
	levels[1] = "info";
	levels[2] = "warning";
	levels[3] = "error";

	while (!level.empty() && strcmp((levels[i]).c_str(), level.c_str()) != 0 && i < 4)
		i++;
	if (!level.empty() && i < 4)
		(this->*funcs[i])();
	else
		std::cout << "Control message." << std::endl;
}
