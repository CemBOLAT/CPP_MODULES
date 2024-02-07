/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:55:21 by cbolat            #+#    #+#             */
/*   Updated: 2023/09/18 16:34:52 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main() {
	Harl harl;

	harl.complain("");

	harl.complain("debug");
	harl.complain("info");
	harl.complain("warning");
	harl.complain("error");

	harl.complain("control");

	return 0;
}
