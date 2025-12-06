/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 14:04:46 by marvin            #+#    #+#             */
/*   Updated: 2025/12/06 14:04:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP

# define MUTANTSTACK_HPP

#include <stack>
#include <iostream>
#include <list>

template <typename T>
class MutantStack: public std::stack<T>
{
	public :
		MutantStack();
		~MutantStack();
		MutantStack(const MutantStack &src);
		MutantStack &operator=(const MutantStack &src);

		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator begin();
		iterator end();
};

#include "MutantStack.tpp"

#endif