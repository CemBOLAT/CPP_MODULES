/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 23:42:52 by cbolat            #+#    #+#             */
/*   Updated: 2023/09/18 16:31:11 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void	f_replace(std::string *_file, std::string s1, std::string s2, size_t *pos)
{
	std::string	new_file;
	size_t		i = 0;
	while (i < *pos)
	{
		new_file += (*_file)[i];
		i++;
	}
	new_file += s2;
	i += s1.length();
	while (i < (*_file).length())
	{
		new_file += (*_file)[i];
		i++;
	}
	*_file = new_file;
	*pos += s2.length();

}

int main(int argc, char **argv){
	if (argc != 4)
	{
		std::cerr << "Error: Invalid number of arguments." << std::endl;
		return (1);
	}
	std::ifstream	ifs(argv[1]);
	if (!ifs.is_open())
	{
		std::cerr << "Error: File not opened." << std::endl;
		return (1);
	}
	ifs.close();
	std::string	s1(argv[2]);
	std::string	s2(argv[3]);
	if (s1.empty() || s2.empty())
	{
		std::cerr << "Error: Invalid string. < empty >" << std::endl;
		return (1);
	}
	ifs.open(argv[1]);
	std::string		_file;
	std::string		line;
	std::ofstream	ofs("FILENAME.replace");
	while (getline(ifs, line))
	{
		line += "\n";
		_file += line;
	}
	size_t pos = 0;
	while (_file.length() > pos)
	{
		pos = _file.find(s1, pos);
		if (pos == std::string::npos)
			break ;
		f_replace(&_file, s1, s2, &pos);
	}
	ofs << _file;
	ofs.close();
	ifs.close();
	return (0);
}
