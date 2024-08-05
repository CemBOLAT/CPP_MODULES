#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){
	std::cout << "Default constructor called" << std::endl;
}

ScalarConverter::ScalarConverter(ScalarConverter const &other){
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

ScalarConverter::~ScalarConverter(){
	std::cout << "Destructor called" << std::endl;
}

ScalarConverter &ScalarConverter::operator=(ScalarConverter const &other){
	std::cout << "Assignation operator called" << std::endl;
	(void)other;
	return (*this);
}
void	ScalarConverter::convert(std::string const &str){

	if (scientificNotation(str))
		return ;
	else if (errorConverter(str))
		return ;
	else if (charConverter(str))
		return ;
	else if (intConverter(str))
		return ;
	else if (floatConverter(str))
		return ;
	else if (doubleConverter(str))
		return ;
	else
		printer();
}
