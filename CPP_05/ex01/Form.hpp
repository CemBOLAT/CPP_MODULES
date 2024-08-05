/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 19:12:36 by cbolat            #+#    #+#             */
/*   Updated: 2023/10/21 15:40:09 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form{
	private:
		std::string const	name;
		bool				isSigned;
		const int			gradeToSign;
		const int			gradeToExecute;
	public:
	// Ortodox
		Form();
		~Form();
		Form(const Form &obj);
		Form	&operator=(const Form &obj);
	// Special constructors
		Form(std::string name, bool isSigned, int gradeToSign, int gradeToExecute);
		Form(std::string name, int gradeToSign, int gradeToExecute);

	// Setters
		void setIsSigned(bool isSigned);
	// Getters
		std::string	getName() const;
		bool		getIsSigned() const;
		int			getGradeToSign() const;
		int			getGradeToExecute() const;

		// Methods
		void	beSigned(Bureaucrat &obj);

		// Exception classes
		class GradeTooHighException : public std::exception{
			public:
				virtual const char	*what() const throw();
		};

		class GradeTooLowException : public std::exception{
			public:
				virtual const char	*what() const throw();
		};

		class AlreadySignedException : public std::exception{
			public:
				virtual const char	*what() const throw();
		};
};

std::ostream	&operator<<(std::ostream &out, const Form &obj) ;

#endif
