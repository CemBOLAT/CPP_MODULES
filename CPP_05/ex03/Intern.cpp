#include "Intern.hpp"

Intern::Intern() {
	std::cout << "Intern default constructor called" << std::endl;
}

Intern::Intern(const Intern& copy) {
	std::cout << "Intern copy constructor called" << std::endl;
	*this = copy;
}

Intern::~Intern() {
	std::cout << "Intern destructor called" << std::endl;
}

Intern& Intern::operator=(const Intern& copy) {
	std::cout << "Intern assignation operator called" << std::endl;
	if (this != &copy)
		*this = copy;
	return *this;
}

AForm* Intern::makeForm(std::string name, std::string target) {

	std::string	names[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
	int i ;

	for (i = 0; i < 3; i++) {
		if (names[i] == name) {
			std::cout << "Intern creates " << name << std::endl;
			break ;
		}
	}

	switch (i) {
		case 0:
			return new RobotomyRequestForm(target);
		case 1:
			return new PresidentialPardonForm(target);
		case 2:
			return new ShrubberyCreationForm(target);
		default:
			std::cout << "Intern can't create " << name << std::endl;
			return NULL;
	}
	return NULL;
}
