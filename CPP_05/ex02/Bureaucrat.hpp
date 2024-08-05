/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 17:49:31 by cbolat            #+#    #+#             */
/*   Updated: 2023/10/21 17:20:01 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>
#include "AForm.hpp"

class AForm;

# define LOWEST_GRADE 150
# define HIGHEST_GRADE 1

class Bureaucrat{
	private:
		std::string const	name;
		int					grade;
	public:
		// Orthodox Canonical AForm
		Bureaucrat();
		Bureaucrat(Bureaucrat const &bureaucrat);
		Bureaucrat &operator=(Bureaucrat const &bureaucrat);
		~Bureaucrat();


		// Constructor with parameters
		Bureaucrat(std::string name, int grade);
		// Getter - Setter functions
		std::string const	getName() const;
		int					getGrade() const;
		void				incrementGrade(int grade);
		void				decrementGrade(int grade);

		class GradeTooHighException : public std::exception{
			public:
				virtual const char *what() const throw();
		};

		class GradeTooLowException : public std::exception{
			public:
				virtual const char *what() const throw();
		};
		// NEW MEMBER FUNCTION
		void				signForm(AForm &form);
		void				executeForm(AForm const &form);
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &Bureaucrat);

#endif
