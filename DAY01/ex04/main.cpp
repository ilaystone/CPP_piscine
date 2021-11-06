/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 07:59:21 by ikhadem           #+#    #+#             */
/*   Updated: 2021/11/06 09:01:39 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

int		main(int ac, char **av)
{
	std::ifstream	in_file;
	std::ofstream	out_file;
	std::string		sub_data;
	std::string		data;
	std::string		to_find;
	std::string		to_replace;
	std::size_t		to;
	std::size_t		from;

	if (ac == 4)
	{
		in_file.open(av[1]);
		out_file.open(std::string(av[1]).append(".replace"));
		to_find = std::string(av[2]);
		to_replace = std::string(av[3]);
		while (std::getline(in_file, data))
		{
			sub_data.clear();
			from = 0;
			to = data.find(to_find);
			std::cout << from << " " << to << std::endl;
			if (to == std::string::npos)
				sub_data = data;
			{
				while (to != std::string::npos)
				{
					sub_data.append(data.substr(from, to - from));
					sub_data.append(to_replace);
					from = to + to_find.size();
					to = data.find(to_find, from);
				}
				if (to == std::string::npos)
					sub_data.append(data.substr(from, to - from));
			}
			out_file << sub_data << std::endl;
		}
	}
	else
	{
		std::cerr << "Wrong Arguments Suplied!" << std::endl;
		std::cerr << "Format: ./FindAndReplace {file_name} {s1} {s2}" << std::endl;
	}
	return (0);
}