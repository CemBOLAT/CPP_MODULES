#include "RPN.hpp"

#include <iostream>

RPN::RPN() : _tokens() {}

RPN::RPN(std::string const &expr) : _expression(expr) {}

RPN::~RPN() { /* empty */}

RPN::RPN(RPN const &other)
	: _tokens(other._tokens) { /* empty */}

RPN &RPN::operator=(RPN const &other)
{
	if (this != &other)
		_tokens = other._tokens;
	return *this;
}

void	RPN::run(){
	int		i = 0;
	while (i != -1){
		this->readExpression(i);
		if (i == -2)
			return ;
	}
	std::cout << "Result: " << this->_tokens.top() << std::endl;
}

void	RPN::readExpression(int &i){
	int	index = this->_expression.find(' ');
	if (index == -1){
		i = -1;
	}
	std::string	token = this->_expression.substr(0, index);
	this->_expression = this->_expression.substr(index + 1);
	if (isOperator(token)){
		if (this->_tokens.size() < 2){
			std::cout << "Error: Not enough operands" << std::endl;
			i = -2;
			return ;
		}
		int		b = this->_tokens.top();
		this->_tokens.pop();
		int		a = this->_tokens.top();
		this->_tokens.pop();
		if (token == "+")
			this->_tokens.push(a + b);
		else if (token == "-")
			this->_tokens.push((a - b));
		else if (token == "*")
			this->_tokens.push(a * b);
		else if (token == "/")
			this->_tokens.push(a / b);
	}
	else{
		try {
			int	n = std::stoi(token);
			if (n > 9)
				throw LessThanTenException();
			this->_tokens.push(std::stoi(token));
		} catch (std::exception &e){
			std::cout << "Error " << e.what() << std::endl;
			i = -2;
			return ;
		}
	}
}

bool	RPN::isOperator(std::string const &token){
	if (token == "+" || token == "-" || token == "*" || token == "/")
		return true;
	return false;
}

const char *RPN::LessThanTenException::what() const throw(){
	return "LessThanTenException: Less than 10";
}
