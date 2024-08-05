#pragma once

#include <algorithm>
#include <exception>
#include <vector>

class Span {
	private :
		unsigned int		_size;
		std::vector<int>	_container;
	public :
		Span();
		Span(unsigned int n);
		Span(const Span &other);
		Span &operator=(const Span &other);
		~Span();

		void addNumber(int n);
		int shortestSpan();
		int longestSpan();


		class FullContainerException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class SpanNoFoundException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};
