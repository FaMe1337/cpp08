/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 14:05:00 by marvin            #+#    #+#             */
/*   Updated: 2025/12/06 14:05:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_TPP

# define MUTANTSTACK_TPP

#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack(): std::stack<T>()
{
	
}

template <typename T>
MutantStack<T>::~MutantStack()
{

}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack &src): std::stack<T>(src)
{

}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack &src)
{
	if (this != &src)
	{
		std::stack<T>::operator=(src);
	}
	return (*this);
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
	return (std::stack<T>::c.begin());
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
	return (std::stack<T>::c.end());
}

#endif