#include "iter.hpp"
#include <iostream>

int main(){
	{
		int array[] = {1, 2, 3, 4, 5};

		iter(array, 5, &inc);
		iter(array, 5, &print);
		std::cout << "-------------" << std::endl;
		iter(array, 5, &dec);
		iter(array, 5, &print);
		std::cout << "-------------" << std::endl;
		iter(array, 5, &multiWithTwo);
		iter(array, 5, &print);
		std::cout << "-------------" << std::endl;
	}
	return 0;
}


