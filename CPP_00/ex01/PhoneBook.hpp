#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

# include "./Contact.hpp"


class	PhoneBook{
	private :
		int	i;
		int	size;
		Contact phoneBook[MAX_CONTACT];
	public :
		PhoneBook();
		void	print_str(std::string str);
		void	add();
		void	search();
};

#endif
