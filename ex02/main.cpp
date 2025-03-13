/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 10:52:10 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/03/13 17:39:44 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <string>
#include <deque>
#include <list>

int	main( void )
{
	std::cout << "✅ we create a MutantStack object." << std::endl;
	MutantStack<int>			mstack;
	mstack.push(100);
	mstack.push(200);
	mstack.push(300);
	mstack.push(400);
	mstack.push(500);
	mstack.push(600);
	mstack.push(700);
	mstack.push(800);
	mstack.push(900);
	mstack.push(1000);

	std::cout << "🔄 we print all value of mstack." << std::endl;
	for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;
	
	std::cout << "\n✅ Test with `MutantStack<int, std::list<int>>`" << std::endl;
	MutantStack< int, std::list<int> >	listStack;
	listStack.push(100);
	listStack.push(200);
	listStack.push(300);
	listStack.push(400);
	listStack.push(500);
	listStack.push(600);
	listStack.push(700);
	listStack.push(800);
	listStack.push(900);
	listStack.push(1000);

	std::cout << "🔄 we print all element with `list<int>`:" << std::endl;
	for (MutantStack< int, std::list<int> >::iterator it = listStack.begin(); it != listStack.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;

	std::cout << "\n✅ Test with `MutantStack<int, std::deque<int>>`" << std::endl;
	MutantStack< int, std::deque<int> >	dequeStack;
	dequeStack.push(100);
	dequeStack.push(200);
	dequeStack.push(300);
	dequeStack.push(400);
	dequeStack.push(500);
	dequeStack.push(600);
	dequeStack.push(700);
	dequeStack.push(800);
	dequeStack.push(900);
	dequeStack.push(1000);

	std::cout << "🔄 we print all element with `deque<int>`:" << std::endl;
	for (MutantStack< int, std::deque<int> >::iterator it = dequeStack.begin(); it != dequeStack.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;

	return (0);
}