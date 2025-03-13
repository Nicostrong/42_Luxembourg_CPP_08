/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 15:44:01 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/03/13 16:32:56 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#include "Easyfind.hpp"
#include <vector>
#include <list>

int	main( void )
{
	std::vector<int>	vec;
	std::list<int>		lst;
	std::deque<int>		deq;
	
	/*	we add some value on container	*/
	for (int i = 0; i < 20; i++)
		vec.push_back(i * 2);
	for (int i = 0; i < 20; i++)
		lst.push_back(i * 3);
	for (int i = 0; i < 20; i++)
		deq.push_front(i * 4);

	/*	we print all container	*/
	std::cout << "Vector: ";
	for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;

	std::cout << "List: ";
	for (std::list<int>::iterator it = lst.begin(); it != lst.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;

	std::cout << "Deque: ";
	for (std::deque<int>::iterator it = deq.begin(); it != deq.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;

	try
	{
		std::cout << "✅ Test `easyfind()` on `vector<int>`:" << std::endl;
		std::vector<int>::iterator	vecIt = easyfind(vec, 6);
		std::cout << "Found in vector: " << *vecIt << std::endl;

		std::cout << "✅ Test `easyfind()` on `list<int>`:" << std::endl;
		std::list<int>::iterator	lstIt = easyfind(lst, 42);
		std::cout << "Found in list " << *lstIt << std::endl;

		std::cout << "✅ Test `easyfind()` on `deque<int>`:" << std::endl;
		std::deque<int>::iterator	deqIt = easyfind(deq, 4);
		std::cout << "Found in deque: " << *deqIt << std::endl;

		std::cout << "✅ Test Exception 'NotFund' on `vector<int>`:" << std::endl;
		try
		{
			std::vector<int>::iterator	vecIt = easyfind(vec, 19);
			std::cout << "Found in vector: " << *vecIt << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		std::cout << "✅ Test Exception 'NotFund' on `list<int>`:" << std::endl;
		try
		{
			std::list<int>::iterator	lstIt = easyfind(lst, 60);
			std::cout << "Found in list " << *lstIt << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		std::cout << "✅ Test Exception 'NotFund' on `deque<int>`:" << std::endl;
		try
		{
			std::deque<int>::iterator	deqIt = easyfind(deq, 1);
			std::cout << "Found in deque: " << *deqIt << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	catch ( const std::exception &e )
	{
		std::cerr << RED << "Something not catching :"<< e.what() << RESET << std::endl;
	}
	return (0);
}