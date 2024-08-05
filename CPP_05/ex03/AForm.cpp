/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 19:12:04 by cbolat            #+#    #+#             */
/*   Updated: 2023/10/21 15:40:59 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : name("default"), gradeToSign(150), gradeToExecute(150) {
	std::cout << "AForm default constructor called" << std::endl;
	this->isSigned = false;
}

AForm::~AForm() {
	std::cout << "AForm destructor called" << std::endl;
}

AForm::AForm(const AForm &obj) : name(obj.name), gradeToSign(obj.gradeToSign), gradeToExecute(obj.gradeToExecute) {
	std::cout << "AForm copy constructor called" << std::endl;
	this->isSigned = obj.isSigned;
}

AForm	&AForm::operator=(const AForm &obj) {
	std::cout << "AForm assignation operator called" << std::endl;
	this->isSigned = obj.isSigned;
	return (*this);
}

AForm::AForm(std::string name, bool isSigned, int gradeToSign, int gradeToExecute)
			: name(name), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute) {
	if (gradeToSign < HIGHEST_GRADE || gradeToExecute < HIGHEST_GRADE)
		throw AForm::GradeTooHighException();
	else if (gradeToSign > LOWEST_GRADE || gradeToExecute > LOWEST_GRADE)
		throw AForm::GradeTooLowException();
	std::cout << "AForm special constructor called" << std::endl;
	this->isSigned = isSigned;
}

std::string	AForm::getName() const {
	return (this->name);
}

bool	AForm::getIsSigned() const {
	return (this->isSigned);
}

int		AForm::getGradeToSign() const {
	return (this->gradeToSign);
}

int		AForm::getGradeToExecute() const {
	return (this->gradeToExecute);
}

const char	*AForm::GradeTooHighException::what() const throw() {
	return ("Grade is too high");
}

const char	*AForm::GradeTooLowException::what() const throw() {
	return ("Grade is too low");
}

const char *AForm::FormNotSignedException::what() const throw() {
	return ("Form is not signed");
}

std::ostream	&operator<<(std::ostream &out, const AForm &obj) {
	out << "------------" << std::endl;
	out << "AForm name: " << obj.getName() << std::endl;
	out << "AForm is signed: " << obj.getIsSigned() << std::endl;
	out << "AForm grade to sign: " << obj.getGradeToSign() << std::endl;
	out << "AForm grade to execute: " << obj.getGradeToExecute() << std::endl;
	out << "------------";
	return (out);
}

void	AForm::beSigned(Bureaucrat &obj){
	if (this->getIsSigned())
		throw AForm::AlreadySignedException();
	else if (obj.getGrade() > this->gradeToSign)
		throw AForm::GradeTooLowException();
	else{
		this->setIsSigned(true);
	}
}

void	AForm::setIsSigned(bool isSigned){
	this->isSigned = isSigned;
}

const char	*AForm::AlreadySignedException::what() const throw() {
	return ("Form is already signed");
}
