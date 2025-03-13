/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 17:40:02 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/03/13 17:07:00 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <ctime>
#include <cstdlib>

int	main( void )
{
	try
	{
		std::cout << "✅ Test with 5 numbers" << std::endl;
		Span	sp(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << "Array of int created." << std::endl;
		std::cout << "6 3 17 9 11" <<std::endl;
		std::cout << "we search the shortest span in the array." << std::endl;
		std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
		std::cout << "we search the longest span in the array." << std::endl;
		std::cout << "Longest Span: " << sp.longestSpan() << std::endl;

		std::cout << "we try to add a new value." << std::endl;
		try
		{
			sp.addNumber(42);
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}

		try
		{
			std::cout << "✅  We create a span of 10000 value." << std::endl;
			Span				bigSpan(10000);
			std::vector<int>	bigNumbers;
			std::srand(std::time(0));
			for (int i = 0; i < 10000; i++)
				bigNumbers.push_back(std::rand());
			std::cout << "We generate 10000 random value for the array." << std::endl;
			bigSpan.addNumber(bigNumbers.begin(), bigNumbers.end());
			std::cout << "we search the shortest span in the array." << std::endl;
			std::cout << "Big Span - Shortest: " << bigSpan.shortestSpan() << std::endl;
			std::cout << "we search the longest span in the array." << std::endl;
			std::cout << "Big Span - Longest: " << bigSpan.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		try
		{
			std::cout << " ✅ We create a span of 1 value." << std::endl;
			Span	litleSpan(1);
			litleSpan.addNumber(42);
			std::cout << "we search the shortest span in the array." << std::endl;
			std::cout << "Litle Span - Shortest: " << litleSpan.shortestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		try
		{
			std::cout << " ✅ We create a span of 1 value." << std::endl;
			Span	litleSpan(1);
			litleSpan.addNumber(42);
			std::cout << "we search the longest span in the array." << std::endl;
			std::cout << "Big Span - Longest: " << litleSpan.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}