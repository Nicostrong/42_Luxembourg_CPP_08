/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 10:52:10 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/27 11:36:48 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int	main( void )
{
	std::cout << "we create a MutantStack object." << std::endl;
	MutantStack<int>			mstack;
	MutantStack<int>::iterator	it;
	MutantStack<int>::iterator	ite;

	std::cout << "we add 5 and 17 on the object." << std::endl;
	mstack.push(5);
	mstack.push(17);
	std::cout << "we print the stack." << std::endl;
	it = mstack.begin();
	ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << ((it + 1 != ite) ? ", " : "\n");
		++it;
	}

	std::cout << "we go to the top of the stack. (stack is LIFO logical)" << std::endl;
	std::cout << mstack.top() << std::endl;
	std::cout << "we remove the last element on the stack." << std::endl;
	mstack.pop();
	std::cout << "we print the stack." << std::endl;
	it = mstack.begin();
	ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << ((it + 1 != ite) ? ", " : "\n");
		++it;
	}

	std::cout << "We print the size of the stack." << std::endl;
	std::cout << mstack.size() << std::endl;

	std::cout << "We add somes value 3, 5, 737 and 0." << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	std::cout << "we print the stack." << std::endl;
	it = mstack.begin();
	ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << ((it + 1 != ite) ? ", " : "\n");
		++it;
	}

	std::cout << "we copy the MutantStack to copyStack." << std::endl;
	MutantStack<int>	copyStack(mstack);

	std::cout << "we add 5 and 17 on the object." << std::endl;
	copyStack.push(5);
	copyStack.push(17);
	std::cout << "we print the copyStack." << std::endl;
	it = copyStack.begin();
	ite = copyStack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << ((it + 1 != ite) ? ", " : "\n");
		++it;
	}

	std::cout << "we go to the top of the copyStack. (stack is LIFO logical)" << std::endl;
	std::cout << copyStack.top() << std::endl;
	std::cout << "we remove the first element on the copyStack." << std::endl;
	copyStack.pop();
	std::cout << "we print the copyStack." << std::endl;
	it = copyStack.begin();
	ite = copyStack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << ((it + 1 != ite) ? ", " : "\n");
		++it;
	}

	std::cout << "We print the size of the copyStack." << std::endl;
	std::cout << copyStack.size() << std::endl;

	std::cout << "We add somes value 3, 5, 737 and 0." << std::endl;
	copyStack.push(3);
	copyStack.push(5);
	copyStack.push(737);
	copyStack.push(0);
	std::cout << "we print the copyStack." << std::endl;
	it = copyStack.begin();
	ite = copyStack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << ((it + 1 != ite) ? ", " : "\n");
		++it;
	}
	
	return (0);
}