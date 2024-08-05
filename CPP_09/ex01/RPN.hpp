#pragma once

#include <string>
#include <stack>

class RPN
{
	private :
		std::string					_expression;
		std::stack<double>			_tokens;

		void	readExpression(int &i);
		bool	isOperator(std::string const &token);
	public:
		RPN();
		RPN(std::string const &expr);
		~RPN();
		RPN(RPN const &other);
		RPN &operator=(RPN const &other);

		void	run();

		class	LessThanTenException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

};
