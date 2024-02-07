/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 17:14:01 by cbolat            #+#    #+#             */
/*   Updated: 2023/09/17 23:17:51 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <iomanip>

# define MAX_CONTACT 8
# define SEARCH_WIDTH 10
# define DEFAULT_PHONE_NUMBER -1

class Contact{
	private:
		std::string	firstName;
		std::string	lastName;
		std::string	nickName;
		std::string	phoneNumber;
		std::string	darkestSecret;
	public:
		Contact();
		void			set_name();
		void			set_last_name();
		void			set_nick_name();
		void			set_phone_number();
		void			set_darkest_secret();
		void			add();
		std::string		get_first_name();
		std::string		get_last_name();
		std::string		get_nick_name();
		std::string		get_phone_number();
		std::string		get_darkest_secret();
};
#endif
