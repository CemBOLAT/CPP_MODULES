/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 19:12:04 by cbolat            #+#    #+#             */
/*   Updated: 2023/10/21 15:26:52 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("default"), isSigned(false), gradeToSign(150), gradeToExecute(150) {
	std::cout << "Form default constructor called" << std::endl;
}

Form::Form(std::string name, int gradeToSign, int gradeToExecute)
			: name(name), isSigned(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute) {
	if (gradeToSign < HIGHEST_GRADE || gradeToExecute < HIGHEST_GRADE)
		throw Form::GradeTooHighException();
	else if (gradeToSign > LOWEST_GRADE || gradeToExecute > LOWEST_GRADE)
		throw Form::GradeTooLowException();
	std::cout << "Form special constructor called" << std::endl;
}

Form::Form(std::string name, bool isSigned, int gradeToSign, int gradeToExecute)
			: name(name), isSigned(isSigned),  gradeToSign(gradeToSign), gradeToExecute(gradeToExecute) {
	if (gradeToSign < HIGHEST_GRADE || gradeToExecute < HIGHEST_GRADE)
		throw Form::GradeTooHighException();
	else if (gradeToSign > LOWEST_GRADE || gradeToExecute > LOWEST_GRADE)
		throw Form::GradeTooLowException();
	std::cout << "Form special constructor called" << std::endl;
}

Form::Form(const Form &obj) : name(obj.name), isSigned(obj.isSigned), gradeToSign(obj.gradeToSign), gradeToExecute(obj.gradeToExecute) {
	std::cout << "Form copy constructor called" << std::endl;
}


Form::~Form() {
	std::cout << "Form destructor called" << std::endl;
}


Form	&Form::operator=(const Form &obj) {
	std::cout << "Form assignation operator called" << std::endl;
	this->isSigned = obj.isSigned;
	return (*this);
}


std::string	Form::getName() const {
	return (this->name);
}

bool	Form::getIsSigned() const {
	return (this->isSigned);
}

int		Form::getGradeToSign() const {
	return (this->gradeToSign);
}

int		Form::getGradeToExecute() const {
	return (this->gradeToExecute);
}

const char	*Form::GradeTooHighException::what() const throw() {
	return ("Grade is too high");
}

const char	*Form::GradeTooLowException::what() const throw() {
	return ("Grade is too low");
}

void	Form::beSigned(Bureaucrat &obj){
	if (this->getIsSigned())
		throw Form::AlreadySignedException();
	else if (obj.getGrade() > this->gradeToSign)
		throw Form::GradeTooLowException();
	else{
		this->setIsSigned(true);
	}
}

void	Form::setIsSigned(bool isSigned){
	this->isSigned = isSigned;
}

std::ostream &operator<<(std::ostream &out, const Form &obj) {
	out << "------------" << std::endl;
	out << "Form name: " << obj.getName() << std::endl;
	out << "Form is signed: " << obj.getIsSigned() << std::endl;
	out << "Form grade to sign: " << obj.getGradeToSign() << std::endl;
	out << "Form grade to execute: " << obj.getGradeToExecute() << std::endl;
	out << "------------";
	return (out);
}

const char	*Form::AlreadySignedException::what() const throw() {
	return ("Form is already signed");
}
