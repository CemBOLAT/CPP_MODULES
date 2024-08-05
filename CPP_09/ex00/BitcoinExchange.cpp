#include "BitcoinExchange.hpp"

#include <iostream>
#include <fstream>

BitcoinExchange::BitcoinExchange()
		: _filename(CSV) {}

BitcoinExchange::BitcoinExchange(std::string filename)
		: _filename(filename) {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy)
		: _filename(copy._filename) {}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &copy)
{
	if (this != &copy){
		this->_filename = copy._filename;
		this->_db = copy._db;
	}
	return *this;
}


BitcoinExchange::~BitcoinExchange() {}

void BitcoinExchange::setFilename(std::string filename) { this->_filename = filename; }

std::string BitcoinExchange::getFilename() const { return _filename; }

void BitcoinExchange::setDB(std::string key, std::string value) { this->_db.insert(std::make_pair(key, value)); }

void	BitcoinExchange::fillData(std::string filename){
	std::ifstream	file;
	std::string		line;

	file.open(filename);
	if (!file.is_open()){
		throw fileNotOpenException();
	}
	std::getline(file, line);
	do {
		std::getline(file, line);
		if (line.empty()){
			break;
		}
		int pos = line.find(',');
		int	pos2 = line.find(';');
		std::string date = line.substr(0, pos);
		std::string value = line.substr(pos + 1, pos2 - pos - 1);
		this->setDB(date, value);
	} while (!file.eof());
	file.close();
}

void	BitcoinExchange::execute() const {
	std::multimap<std::string, std::string> db = _db;
	std::ifstream	file;
	std::string		line;

	file.open(_filename);
	if (!file.is_open()){
		throw fileNotOpenException();
	}
	std::getline(file, line); // ignore first line
	do {
		std::getline(file, line);
		if (line.empty()){
			break;
		}
		size_t pos = line.find('|');
		try {
			if (pos == std::string::npos){
				throw badInput();
			}
			std::string date = line.substr(0, pos - 1);
			std::string value = line.substr(pos + 2, line.size() - pos - 1);
			if (atof(value.c_str()) < static_cast<float>(0.0))
				throw notPositive();
			else if (atof(value.c_str()) > static_cast<float>(1000))
				throw tooLarge();
			else{
				std::multimap<std::string, std::string>::iterator it = db.find(date);
				if (it == db.end()){
					float f = this->findClosest(date, value);

					std::cout << date << " => " << value << " = " << f << std::endl;
				}
				else {
					std::cout << date << " => " << value << " = " << static_cast<float>(atof(value.c_str()) * atof(it->second.c_str())) << std::endl;
				}
			}
		} catch (std::exception &e){
			if (std::string(e.what()) == "Error: bad input."){
				std::cout << e.what() << " => " << line << std::endl;
			} else
				std::cout << e.what() << std::endl;
		}

	} while (!file.eof());
	file.close();
}

const char *BitcoinExchange::notPositive::what() const throw() { return "Error: not positive number."; }

const char *BitcoinExchange::badInput::what() const throw() { return "Error: bad input."; }

const char *BitcoinExchange::NotEnoughDataException::what() const throw() { return "Not enough data"; }

const char *BitcoinExchange::tooLarge::what() const throw() { return "Error: too large a number.";}

const char *BitcoinExchange::fileNotOpenException::what() const throw(){ return "File not open"; }


float	BitcoinExchange::findClosest(std::string date, std::string value) const {
	std::multimap<std::string, std::string>::const_iterator it = _db.begin();

	decreaseDate(date);

	while (it != _db.end()){
		if (it->first == date){
			return static_cast<float>(atof(value.c_str()) * atof(it->second.c_str())) ;
		}
		it++;
	}
	return findClosest(date, value);;
}


void	BitcoinExchange::decreaseDate(std::string &date) const{
	std::string year = date.substr(0, 4);
	std::string month = date.substr(5, 2);
	std::string day = date.substr(8, 2);
	int y = atoi(year.c_str());
	int m = atoi(month.c_str());
	int d = atoi(day.c_str());
	if (d > 1){
		d--;
	} else if (m > 1){
		m--;
		d = 31;
	} else {
		y--;
		m = 12;
		d = 31;
	}

	if (m < 10){
		month = "0" + std::to_string(m);
	} else {
		month = std::to_string(m);
	}
	if (d < 10){
		day = "0" + std::to_string(d);
	} else {
		day = std::to_string(d);
	}
	date = std::to_string(y) + "-" + month + "-" + day;

}

