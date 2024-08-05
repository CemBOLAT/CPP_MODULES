/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 17:54:56 by cbolat            #+#    #+#             */
/*   Updated: 2023/10/27 14:43:32 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
	: name("Bureaucrat"), grade(LOWEST_GRADE)
{
	std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &obj){
	*this = obj;
	std::cout << "Bureaucrat copy constructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &obj) {
	const_cast<std::string&>(this->name) = obj.name;
	this->grade = obj.grade;
	std::cout << "Bureaucrat assignation operator called" << std::endl;
	return (*this);
}

Bureaucrat::~Bureaucrat(){
	std::cout << "Bureaucrat " << this->name << " is dead" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade)
	: name(name), grade(grade)
{
	if (grade < HIGHEST_GRADE)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > LOWEST_GRADE)
		throw Bureaucrat::GradeTooLowException();
	std::cout << "Bureaucrat " << this->name << " is created ! " << std::endl;
}

std::string const	Bureaucrat::getName() const
{
	return (this->name);
}

int					Bureaucrat::getGrade() const
{
	return (this->grade);
}

void				Bureaucrat::incrementGrade(int grade)
{
	if (this->grade - grade < HIGHEST_GRADE)
		throw Bureaucrat::GradeTooHighException();
	else
		this->grade -= grade;
}

void				Bureaucrat::decrementGrade(int grade)
{
	if (this->grade + grade > LOWEST_GRADE)
		throw Bureaucrat::GradeTooLowException();
	else
		this->grade += grade;
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &Bureaucrat)
{
	out << "------------" << std::endl;
	out << Bureaucrat.getName() << ", Bureaucrat grade " << Bureaucrat.getGrade() << std::endl;
	out << "------------";
	return (out);
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}


void	Bureaucrat::signForm(Form &form){
	try {
		form.beSigned(*this);
		std::cout << this->getName() << " signs " << form.getName() << std::endl;
	}
	catch (std::exception &e){
		std::cout << this->getName() << " cannot sign " << form.getName() << " because " << e.what() << std::endl;
	}
}
