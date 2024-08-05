#pragma once

#include <iostream>

template <class T>
void iter(T *array, int length, void (*f)(T &)){
	for (int i = 0; i < length; i++){
		f(array[i]);
	}
}

template <class T>
void print(T &i){
	std::cout << i <<  " " << std::endl;
}

template <class T>
void inc(T &i){
	i += static_cast<T>(1);
}

template <class T>
void dec(T &i){
	i -= static_cast<T>(1);
}

template <class T>
void multiWithTwo(T &i){
	i *= static_cast<T>(2);
}


