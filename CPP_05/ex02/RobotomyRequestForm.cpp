/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 20:31:08 by cbolat            #+#    #+#             */
/*   Updated: 2023/10/27 14:47:52 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
	: AForm("RobotomyRequestForm", false ,72, 45)
{
	std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
	: AForm("RobotomyRequestForm", false ,72, 45) , _target(target)
{
	std::cout << "RobotomyRequestForm " << this->_target << " is created ! " << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &obj){
	*this = obj;
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &obj) {
	this->_target = obj._target;
	this->setIsSigned(obj.getIsSigned());
	std::cout << "RobotomyRequestForm assignation operator called" << std::endl;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(){
	std::cout << "RobotomyRequestForm " << this->_target << " is dead" << std::endl;
}

std::string const	RobotomyRequestForm::getTarget() const
{
	return (this->_target);
}

void				RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (this->getGradeToExecute() == false)
		throw AForm::FormNotSignedException();
	else if (executor.getGrade() > this->getGradeToExecute())
		throw AForm::GradeTooLowException();
	srand(time(NULL));
	int i = rand() % 542;
	if (i <= 542 / 2){
		std::cout << this->getTarget() << " has been robotomized successfully" << std::endl;
	}
	else
		std::cout << this->getTarget() << " has been failed to robotomized" << std::endl;
}
