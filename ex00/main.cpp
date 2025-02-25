/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 15:44:01 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/25 17:35:12 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#include "Easyfind.hpp"
#include <vector>
#include <list>

int	main( void )
{
	try
	{
		std::vector<int> vec;
		for (int i = 0; i < 10; ++i)
			vec.push_back(i * 2);

		std::vector<int>::iterator it = easyfind(vec, 4);
		std::cout << "Found in vector: " << *it << std::endl;

		std::list<int> lst;
		for (int i = 1; i <= 5; ++i)
			lst.push_back(i * 3);

		std::list<int>::iterator itList = easyfind(lst, 12);
		std::cout << "Found in list: " << *itList << std::endl;

		easyfind(vec, 99);

	}
	catch ( const std::exception &e )
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}