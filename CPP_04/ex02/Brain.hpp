/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:01:12 by cbolat            #+#    #+#             */
/*   Updated: 2023/09/16 18:42:38 by cbolat           ###   ########.fr       */
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
		Brain();
		~Brain();
		Brain(const Brain &obj);
		Brain &operator=(const Brain &obj);

		std::string getIdeas(int n) const;
		void setIdeas(std::string idea);
};

# endif
