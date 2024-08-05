#pragma once

#include <stack>
#include <list>

template <class T>
class MutantStack : public std::stack<T>
{
	private :
		/* Intentionally left empty */
	public :
		MutantStack();
		MutantStack(const MutantStack<T>& other);
		MutantStack<T>& operator=(const MutantStack<T>& other);
		virtual ~MutantStack();

		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin();
		iterator end();
};

#include "MutantStack.tpp"
