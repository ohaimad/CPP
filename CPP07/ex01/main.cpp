/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 23:42:05 by ohaimad           #+#    #+#             */
/*   Updated: 2024/02/14 23:01:26 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

// int main() {
//     int intArray[] = {1, 2, 3, 4, 5};
//     size_t intArrayLength = sizeof(intArray) / sizeof(intArray[0]);

//     char charArray[] = {'a', 'b', 'c', 'd', 'e'};
//     size_t charArrayLength = sizeof(charArray) / sizeof(charArray[0]);

//     std::cout << "Printing intArray: ";
//     iter(intArray, intArrayLength, fun<int>);
//     std::cout << std::endl;

//     std::cout << "Printing charArray: ";
//     iter(charArray, charArrayLength, fun<char>);
//     std::cout << std::endl;

//     return 0;
// }

class Awesome
{
  public:
    Awesome( void ) : _n( 42 ) { return; }
    int get( void ) const { return this->_n; }
  private:
    int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
{
  o << rhs.get();
  return o;
}

template< typename T >
void print( T& x )
{
  std::cout << x << std::endl;
  return;
}

int main() {
  int tab[] = { 0, 1, 2, 3, 4 };
  Awesome tab2[5];

  iter( tab, 5, print<const int> );
  iter( tab2, 5, print<Awesome> );

  return 0;
}