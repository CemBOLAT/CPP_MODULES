#pragma once

#include <algorithm>
#include <exception>

class	NotFoundException : public std::exception
{
	public:
		virtual const char* what() const throw()
		{
			return ("Not Found");
		}
};

# include "easyfind.tpp"
