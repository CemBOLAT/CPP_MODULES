/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:23:20 by cbolat            #+#    #+#             */
/*   Updated: 2023/09/18 16:38:26 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# define DEBUG "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n"
# define INFO "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n"
# define WARNING "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n"
# define ERROR "This is unacceptable, I want to speak to the manager now.\n"

#include <iostream>

class	Harl
{
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
	public:
		Harl(void);
		~Harl(void);
		void complain(char *str);
		int validLevel(char *str);
};

#endif
