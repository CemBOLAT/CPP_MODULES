
#include "./PhoneBook.hpp"

PhoneBook::PhoneBook(){
	i = 0;
	size = 0;
}

void	PhoneBook::print_str(std::string str){
	if (str.length() > SEARCH_WIDTH){
		std::cout << std::setw(SEARCH_WIDTH) << str.substr(0, SEARCH_WIDTH - 1) + ".";
	}
	else{
		std::cout << std::setw(SEARCH_WIDTH) << str;
	}
	std::cout << "|";
}

void	PhoneBook::add(){
	if (i >= MAX_CONTACT)
		i = 0;
	if (size >= MAX_CONTACT){
		phoneBook[i].add();
		i++;
	}
	else{
		phoneBook[i].add();
		i++;
		size++;
	}
}

void	PhoneBook::search(){
	int index;

	std::cout << std::setw(SEARCH_WIDTH) << "index" << "|";
	std::cout << std::setw(SEARCH_WIDTH) << "f.name" << "|";
	std::cout << std::setw(SEARCH_WIDTH) << "l.name" << "|";
	std::cout << std::setw(SEARCH_WIDTH) << "n.name" << "|" << std::endl;
	for (int index = 0; index < size; index++){
		std::cout << std::setw(SEARCH_WIDTH) << index << "|";
		print_str(phoneBook[index].get_first_name());
		print_str(phoneBook[index].get_last_name());
		print_str(phoneBook[index].get_nick_name());
		std::cout << std::endl;
	}
	do{
		std::cout << "Please enter the index: ";
		std::cin >> index;
		if (index < 0 || index >= size)
			std::cout << "Invalid index." << std::endl;
	} while (index < 0 || index >= size);
	std::cin.ignore();
	std::cout << "***************PEOPLE FOUND**************" << std::endl;
	std::cout << "First name : " << phoneBook[index].get_first_name() << std::endl;
	std::cout << "Last name : " << phoneBook[index].get_last_name() << std::endl;
	std::cout << "Nick name : " << phoneBook[index].get_nick_name() << std::endl;
	std::cout << "Phone number : " << phoneBook[index].get_phone_number() << std::endl;
	std::cout << "Darkest Secret : " << phoneBook[index].get_darkest_secret() << std::endl;
}

