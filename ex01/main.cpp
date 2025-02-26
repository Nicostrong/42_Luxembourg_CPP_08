/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 17:40:02 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/26 10:48:25 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <ctime>
#include <cstdlib>

int	main( void )
{
	try
	{
		Span				sp(5);

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

		std::cout << "We create a span of 10000 value." << std::endl;
		Span				bigSpan(10000);

		std::cout << "We create an array of 10000 value." << std::endl;
		std::vector<int>	bulk(10000);

		std::cout << "We generate 10000 random value for the array." << std::endl;
		for (int j = 0; j < 10000; ++j)
			bulk[j] = rand();
		
		std::cout << "We put all value on the span object." << std::endl;
		bigSpan.addNumber(bulk.begin(), bulk.end());

		std::cout << "we search the shortest span in the array." << std::endl;
		std::cout << "Big Span - Shortest: " << bigSpan.shortestSpan() << std::endl;
		std::cout << "we search the longest span in the array." << std::endl;
		std::cout << "Big Span - Longest: " << bigSpan.longestSpan() << std::endl;

	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}