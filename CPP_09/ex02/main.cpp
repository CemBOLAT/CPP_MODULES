#include <iostream>
#include "PmergeMe.hpp"

int main(int argc, char **argv){
	PmergeMe merger;

	if (merger.fillData(argc, argv) == false)
		return (std::cout << "Error" << std::endl, 1);
	std::cout << "Before:\t" << merger << std::endl;
	merger.mergeData();
	std::cout << "After:\t" <<  merger << std::endl;
	merger.printTime();

}
