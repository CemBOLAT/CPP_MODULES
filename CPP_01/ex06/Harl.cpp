/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:52:17 by cbolat            #+#    #+#             */
/*   Updated: 2024/02/07 20:41:59 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <cstring>

Harl::Harl(void) { return ; }

Harl::~Harl(void) { return ;}

void	Harl::debug(void) {
	std::cout << "[<<< DEBUG >>>]" << std::endl;
	std::cout << DEBUG << std::endl;
}

void	Harl::info(void) {
	std::cout << "[<<< INFO >>>]" << std::endl;
	std::cout << INFO << std::endl;
}

void	Harl::warning(void) {
	std::cout << "[<<< WARNING >>>]" << std::endl;
	std::cout << WARNING << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[<<< ERROR >>>]" << std::endl;
	std::cout << ERROR << std::endl;
}

int		Harl::validLevel(char *str){
	if (strcmp(str, "DEBUG") == 0 ||
		strcmp(str, "INFO") == 0 ||
		strcmp(str, "WARNING") == 0 ||
		strcmp(str, "ERROR") == 0)
		return (1);
	else
		return (std::cout << "[ Probably complaining about insignificant problems ]" << std::endl, 0);
}

void	Harl::complain(char *str){
	switch (str[0])
	{
		case 'D': {
			debug();
			info();
			warning();
			error();
			break;
		}
		case 'I':{
			info();
			warning();
			error();
			break;
		}
		case 'W': {
			warning();
			error();
			break;
		}
		case 'E':{
			error();
			break;
		}
	}
}
