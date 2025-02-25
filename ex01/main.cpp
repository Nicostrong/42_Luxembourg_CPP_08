/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 17:40:02 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/25 18:30:02 by nfordoxc         ###   Luxembourg.lu     */
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

		std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl; // ➔ 2
		std::cout << "Longest Span: " << sp.longestSpan() << std::endl;   // ➔ 14

		// Test FullSpanException
		try
		{
			sp.addNumber(42);  // Doit lever FullSpanException
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}

		Span				bigSpan(10000);
		std::vector<int>	bulk(10000);
		for (int i = 0; i < 10000; ++i)
			bulk[i] = rand();
		for (size_t j = 0; j < bulk.size(); ++j)
			std::cout << bulk[j] << " ";
		std::cout << std::endl;
		
		bigSpan.addNumber(bulk.begin(), bulk.end());
		std::cout << "Big Span - Shortest: " << bigSpan.shortestSpan() << std::endl;
		std::cout << "Big Span - Longest: " << bigSpan.longestSpan() << std::endl;

	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}