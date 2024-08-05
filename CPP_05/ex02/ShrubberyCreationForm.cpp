/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 20:33:05 by cbolat            #+#    #+#             */
/*   Updated: 2023/10/21 17:21:38 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ShrubberyCreationForm.hpp"
# include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm()
	: _target("default")
{
	std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &obj){
	std::cout << "ShrubberyCreationForm co<py constructor called" << std::endl;
	*this = obj;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &obj) {
	this->_target = obj._target;
	this->setIsSigned(obj.getIsSigned());
	std::cout << "ShrubberyCreationForm assignation operator called" << std::endl;
	return (*this);
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
	: AForm("ShrubberyCreationForm", false ,MIN_REQ, MIN_EXE),
	_target(target)
{
	std::cout << "ShrubberyCreationForm " << this->_target << " is created ! " << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm " << this->_target << " is dead" << std::endl;
}

std::string const	ShrubberyCreationForm::getTarget() const
{
	return (this->_target);
}

void	ShrubberyCreationForm::setTarget(std::string target)
{
	this->_target = target;
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
	if (this->getGradeToExecute() == false)
		throw AForm::FormNotSignedException();
	else if (executor.getGrade() > this->getGradeToExecute())
		throw AForm::GradeTooLowException();
	std::ofstream file(this->_target + "_shrubbery");
	if (!file.is_open())
		throw std::runtime_error("File open error");
	this->createTree(file);

}

void	ShrubberyCreationForm::createTree(std::ofstream &file) const {

	file << "        #" << std::endl;
	file << "       ###" << std::endl;
	file << "      #####" << std::endl;
	file << "     #######" << std::endl;
	file << "    #########" << std::endl;
	file << "   ###########" << std::endl;
	file << "  #############" << std::endl;
	file << " ###############" << std::endl;
	file << "#################" << std::endl;
	file << "       ###" << std::endl;
	file << "       ###" << std::endl;
	file << "       ###" << std::endl;
	file << "       ###" << std::endl;

	file.close();
}
