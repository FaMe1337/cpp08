/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 12:24:55 by marvin            #+#    #+#             */
/*   Updated: 2025/11/27 12:24:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	std::cout << "Testing with std::vector" << std::endl;
	{
		std::vector<int> vec;
		vec.push_back(1);
		vec.push_back(2);
		vec.push_back(3);
		vec.push_back(4);
		vec.push_back(5);

		try {
			std::vector<int>::iterator it = easyfind(vec, 3);
			std::cout << "Found: " << *it << std::endl;
		}
		catch (std::exception &e) {
			std::cout << "Error: " << e.what() << std::endl;
		}

		try {
			std::vector<int>::iterator it = easyfind(vec, 10);
			std::cout << "Found: " << *it << std::endl;
		}
		catch (std::exception &e) {
			std::cout << "Error: " << e.what() << std::endl;
		}
	}
	std::cout << "Testing with std::list" << std::endl;
	{
		std::list<int> lst;
		lst.push_front(10);
		lst.push_back(20);
		lst.push_back(30);
		lst.push_back(40);
		lst.push_back(50);

		try {
			std::list<int>::iterator it = easyfind(lst, 30);
			std::cout << "Found: " << *it << std::endl;
		}
		catch (std::exception &e) {
			std::cout << "Error: " << e.what() << std::endl;
		}

		try {
			std::list<int>::iterator it = easyfind(lst, 100);
			std::cout << "Found: " << *it << std::endl;
		}
		catch (std::exception &e) {
			std::cout << "Error: " << e.what() << std::endl;
		}
	}

	std::cout << "Testing with std::deque" << std::endl;
	{
		std::deque<int> deq;
		deq.push_back(100);
		deq.push_back(200);
		deq.push_back(300);
		deq.push_back(400);

		try {
			std::deque<int>::iterator it = easyfind(deq, 200);
			std::cout << "Found: " << *it << std::endl;
		}
		catch (std::exception &e) {
			std::cout << "Error: " << e.what() << std::endl;
		}

		try {
			std::deque<int>::iterator it = easyfind(deq, 500);
			std::cout << "Found: " << *it << std::endl;
		}
		catch (std::exception &e) {
			std::cout << "Error: " << e.what() << std::endl;
		}
	}

	std::cout << "Testing with empty container" << std::endl;
	{
		std::vector<int> empty;

		try {
			std::vector<int>::iterator it = easyfind(empty, 1);
			std::cout << "Found: " << *it << std::endl;
		}
		catch (std::exception &e) {
			std::cout << "Error: " << e.what() << std::endl;
		}
	}

	std::cout << "Testing with first and last elements" << std::endl;
	{
		std::vector<int> vec;
		vec.push_back(42);
		vec.push_back(21);
		vec.push_back(84);

		try {
			std::vector<int>::iterator it = easyfind(vec, 42);
			std::cout << "Found first element: " << *it << std::endl;
		}
		catch (std::exception &e) {
			std::cout << "Error: " << e.what() << std::endl;
		}

		try {
			std::vector<int>::iterator it = easyfind(vec, 84);
			std::cout << "Found last element: " << *it << std::endl;
		}
		catch (std::exception &e) {
			std::cout << "Error: " << e.what() << std::endl;
		}
	}

	return 0;
}
