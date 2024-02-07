
#include "./Contact.hpp"

Contact::Contact(){
	phoneNumber = DEFAULT_PHONE_NUMBER;
}

void	Contact::set_name()
{
	do {
		std::cout << "Please enter the first name: ";
		getline(std::cin, firstName);
		if (firstName.empty())
			std::cout << "Invalid first name." << std::endl;
	} while (firstName.empty());
}

void	Contact::set_last_name()
{
	do {
		std::cout << "Please enter the last name: ";
		getline(std::cin, lastName);
		if (lastName.empty())
			std::cout << "Invalid last name." << std::endl;
	} while (lastName.empty());
}

void	Contact::set_nick_name()
{
	do {
		std::cout << "Please enter the nick name: ";
		getline(std::cin, nickName);
		if (nickName.empty())
			std::cout << "Invalid nick name." << std::endl;
	} while (nickName.empty());
}

void	Contact::set_phone_number()
{
	do {
		std::cout << "Please enter the phone number: ";
		getline(std::cin, phoneNumber);
		if (phoneNumber.empty() || phoneNumber.find_first_not_of("0123456789") != std::string::npos)
			std::cout << "Invalid phone number." << std::endl;
	} while (phoneNumber.empty() || phoneNumber.find_first_not_of("0123456789") != std::string::npos);
}

void	Contact::set_darkest_secret()
{
	do {
		std::cout << "Please enter the darkest secret: ";
		getline(std::cin, darkestSecret);
		if (darkestSecret.empty())
			std::cout << "Invalid darkest secret." << std::endl;
	} while (darkestSecret.empty());
}

void	Contact::add()
{
	set_name();
	set_last_name();
	set_nick_name();
	set_phone_number();
	set_darkest_secret();
}

std::string	Contact::get_first_name()
{
	return firstName;
}

std::string	Contact::get_last_name()
{
	return lastName;
}

std::string	Contact::get_nick_name()
{
	return nickName;
}

std::string	Contact::get_phone_number()
{
	return phoneNumber;
}

std::string	Contact::get_darkest_secret()
{
	return darkestSecret;
}
