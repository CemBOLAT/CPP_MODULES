#pragma once

#include <map>
#include <string>
#include <unordered_map>

#ifndef CSV
# define CSV "data.csv"
#endif

class BitcoinExchange
{
	private:
		std::multimap<std::string, std::string>	_db;
		std::string								_filename;
	public:
		// Orthodox Canonical Form
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &copy);
		BitcoinExchange &operator=(const BitcoinExchange &copy);
		~BitcoinExchange();
		// Special Constructor
		BitcoinExchange(std::string filename);

		// -----------------------------   Member Functions   -----------------------------

		// Encapsulation
		void								setFilename(std::string filename);
		std::string							getFilename() const;
		void								setDB(std::string key, std::string value);

		void								fillData(std::string a);
		// pdf needed function
		void								execute() const;
		// finding closest date
		float								findClosest(std::string data, std::string value) const;
		// helper function to finding closest date
		void								decreaseDate(std::string &date) const;

		class	NotEnoughDataException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

		class	fileNotOpenException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		class	tooLarge : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		class	notPositive : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		class	badInput : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};
