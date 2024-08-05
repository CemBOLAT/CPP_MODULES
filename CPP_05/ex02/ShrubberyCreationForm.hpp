/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 20:32:34 by cbolat            #+#    #+#             */
/*   Updated: 2023/10/19 23:45:03 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP

# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include "AForm.hpp"

# define MIN_REQ 145
# define MIN_EXE 137

class ShrubberyCreationForm : public AForm
{
	private:
		std::string		_target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(ShrubberyCreationForm const &obj);
		ShrubberyCreationForm &operator=(ShrubberyCreationForm const &obj);
		virtual ~ShrubberyCreationForm();

		ShrubberyCreationForm(std::string target);

		std::string const	getTarget() const;
		void				setTarget(std::string target);
		void				execute(Bureaucrat const &executor) const;
		void				createTree(std::ofstream &file) const;
};

# endif

