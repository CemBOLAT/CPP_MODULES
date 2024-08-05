#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm{
	private:
		std::string const	name;
		bool				isSigned;
		const int			gradeToSign;
		const int			gradeToExecute;
	public:
	// Ortodox
		AForm();
		virtual ~AForm() = 0;
		AForm(const AForm &obj);
		AForm	&operator=(const AForm &obj);
	// Special constructor
		AForm(std::string name, bool isSigned, int gradeToSign, int gradeToExecute);

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
		class FormNotSignedException : public std::exception{
			public:
				virtual const char	*what() const throw();
		};
		class AlreadySignedException : public std::exception{
			public:
				virtual const char	*what() const throw();
		};

		virtual void	execute(Bureaucrat const &executor) const = 0;
};

std::ostream &operator<<(std::ostream &out, const AForm &obj);

#endif
