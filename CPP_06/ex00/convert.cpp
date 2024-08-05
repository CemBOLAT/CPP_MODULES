#include "Utils.h"

bool	charConverter(std::string const &obj){
	if (obj.length() == 1 && !std::isdigit(obj[0])){
		std::cout.setf(std::ios::fixed);
		std::cout.setf(std::ios::showpoint);
		std::cout.precision(1);
		printer(obj[0], static_cast<int>(obj[0]), static_cast<float>(obj[0]), static_cast<double>(obj[0]));
		return (true);
	}
	return (false);
}

bool	intConverter(std::string const &obj){
	if (obj.length() == 1 && std::isdigit(obj[0])){
		std::cout.setf(std::ios::fixed);
		std::cout.setf(std::ios::showpoint);
		std::cout.precision(1);
		printer(std::stoi(obj), static_cast<float>(std::stoi(obj)), static_cast<double>(std::stoi(obj)));
		return (true);
	}
	else if (obj.length() > 1 && obj.find_first_not_of("0123456789") == std::string::npos){
		std::cout.setf(std::ios::fixed);
		std::cout.setf(std::ios::showpoint);
		std::cout.precision(1);
		int		nbr = std::stoi(obj);
		if (nbr < 32 || nbr > 126)
			printer(nbr, static_cast<float>(nbr), static_cast<double>(nbr));
		else
			printer(static_cast<char>(nbr), nbr, static_cast<float>(nbr), static_cast<double>(nbr));
		return (true);
	}
	return (false);
}

bool	errorConverter(std::string const &obj){
	if (obj.length() > 1 && obj.find_first_not_of("0123456789.f") != std::string::npos){
		printer();
		return (true);
	}
	else if (obj.length() > 1 && obj.find('f') != std::string::npos && obj.find('f') != obj.find_last_of('f')){
		printer();
		return (true);
	}
	else if (obj.length() > 1 && obj.find('.') != std::string::npos && obj.find('.') != obj.find_last_of('.')){
		printer();
		return (true);
	}
	else if (obj.length() > 1 && obj.find('f') != std::string::npos && obj[obj.size() - 1] != 'f'){
		printer();
		return (true);
	}
	return (false);
}

bool	floatConverter(std::string const &obj){
	if (obj.length() > 1 && obj.find_first_not_of("0123456789.f") == std::string::npos
			&& obj.find('f') != std::string::npos){
		std::cout.setf(std::ios::fixed);
		std::cout.setf(std::ios::showpoint);
		int precision = obj.find('.') != std::string::npos ? obj.size() - obj.find('.') - 2 : 1;
		std::cout.precision(precision);
		float	nbr = std::stof(obj);
		if (nbr < 32 || nbr > 126)
			printer(static_cast<int>(nbr), nbr, static_cast<double>(nbr));
		else
			printer(static_cast<char>(nbr), static_cast<int>(nbr), nbr, static_cast<double>(nbr));
		return (true);
	}
	return (false);
}

bool	doubleConverter(std::string const &obj){
	if (obj.length() > 1 && obj.find_first_not_of("0123456789.") == std::string::npos){
		std::cout.setf(std::ios::fixed);
		std::cout.setf(std::ios::showpoint);
		int precision = obj.find('.') != std::string::npos ? obj.size() - obj.find('.') - 1 : 1;
		std::cout.precision(precision);
		double	nbr = std::stod(obj);
		if (nbr < 32 || nbr > 126)
			printer(static_cast<int>(nbr), static_cast<float>(nbr), nbr);
		else
			printer(static_cast<char>(nbr), static_cast<int>(nbr), static_cast<float>(nbr), nbr);
		return (true);
	}
	return (false);
}


bool	scientificNotation(std::string const &str){
	std::string const sciendtificNotationFloat[] = {"inff", "-inff", "nanf"};
	std::string const sciendtificNotationDouble[] = {"inf", "-inf", "nan"};

	int	i = 0;
	for (; i < 3; i++){
		if (str == sciendtificNotationFloat[i]){
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: " << sciendtificNotationFloat[i] << std::endl;
			std::cout << "double: " << sciendtificNotationDouble[i] << std::endl;
			return (true);
		}
		else if (str == sciendtificNotationDouble[i]){
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: " << sciendtificNotationFloat[i] << std::endl;
			std::cout << "double: " << sciendtificNotationDouble[i] << std::endl;
			return (true);
		}
	}
	return (false);
}
