#include "BitcoinExchange.hpp"

#include <iostream>

int main(int argc, char **argv){
	if (argc != 2){
		std::cout << "Error ! Usage: " << argv[0] << " <file>" << std::endl;
		return 1;
	}
	BitcoinExchange exchange(argv[1]);
	try {
		exchange.fillData(CSV);
		exchange.execute();
	} catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
}
