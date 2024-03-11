/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:01:12 by cbolat            #+#    #+#             */
/*   Updated: 2023/10/07 17:12:18 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

# define IDEA_SIZE 100

class Brain{
	private :
		std::string ideas[IDEA_SIZE];
	public :
		// 	Orthodox canonical class form
		Brain();
		Brain(const Brain &obj);
		Brain &operator=(const Brain &obj);
		~Brain();

		// 	Setters and getters
		std::string getIdeas(int n) const;
		void setIdeas(std::string idea);
};

# endif
