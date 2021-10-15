/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 13:53:10 by ikhadem           #+#    #+#             */
/*   Updated: 2021/10/15 19:12:40 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <ctime>

struct Data
{
public:
	std::string		name;
	int				age;
	bool			is_alive;
};

std::string genRandomName(const int len)
{
    std::string tmp_s;
    static const char alphanum[] =
        "0123456789"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz";
    std::srand((unsigned)time(NULL));

    tmp_s.reserve(len);

    for (int i = 0; i < len; ++i)
        tmp_s += alphanum[std::rand() % (sizeof(alphanum) - 1)];
    return (tmp_s);
}

uintptr_t	serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data		*deserilize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

Data	*randomGen(void)
{
	Data		*ret;
	int			rand;

	ret = new Data();
	std::srand((unsigned)time(NULL));
	rand = (std::rand() % 60) + 1;
	ret->name = genRandomName(10);
	ret->age = rand;
	ret->is_alive = (rand % 2 == 0) ? false : true;
	return (ret);
}

int		main(void)
{
	Data		*test;
	Data		*de;
	uintptr_t	ser;


	test = randomGen();
	ser = serialize(test);
	std::cout << "unseialized :" << std::endl;
	std::cout << test->name << std::endl;
	std::cout << test->age << std::endl;
	std::cout << (test->is_alive ? "true" : "false") << std::endl << std::endl;
	std::cout << "value of ptr serialization :" << std::endl;
	std::cout << ser << std::endl << std::endl;
	de = deserilize(ser);
	std::cout << "after serialization :" << std::endl;
	std::cout << de->name << std::endl;
	std::cout << de->age << std::endl;
	std::cout << (de->is_alive ? "true" : "false") << std::endl;
	delete test;
	return (0);
}