/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 13:11:27 by ohaimad           #+#    #+#             */
/*   Updated: 2024/02/26 23:53:16 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
    MutantStack<int> stack;

    stack.push(1);
    stack.push(4);
    stack.push(2);
    stack.push(9);
    stack.push(5);

    // Print elements using iterator (begin to end)
    std::cout << "iteration: ";
    for (MutantStack<int>::iterator it = stack.begin(); it != stack.end(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    return 0;
}

// int main() 
// {
//     MutantStack<int> mstack;
//     mstack.push(5);
//     mstack.push(17);
//     std::cout << mstack.top() << std::endl;
//     mstack.pop();
//     std::cout << mstack.size() << std::endl;
//     mstack.push(3);
//     mstack.push(5);
//     mstack.push(737);
//     mstack.push(0);

//     MutantStack<int>::iterator it = mstack.begin();
//     MutantStack<int>::iterator ite = mstack.end();
//     ++it;
//     --it;
//     while (it != ite) 
//     {
//         std::cout << *it << std::endl;
//         ++it;
//     }

//     std::stack<int> s(mstack);

//     return 0;
// }
