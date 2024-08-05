#pragma once

#include <stack>

template <class T>
MutantStack<T>::MutantStack() : std::stack<T>() {/* Intentionally left empty */}

template <class T>
MutantStack<T>::MutantStack(const MutantStack<T>& other)
	: std::stack<T>(other) { /* Intentionally left empty */}

template <class T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack<T>& other){
	std::stack<T>::operator=(other);
	return *this;
}

template <class T>
MutantStack<T>::~MutantStack() {/* Intentionally left empty */}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin(){
	return std::stack<T>::c.begin();
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end(){
	return std::stack<T>::c.end();
}
