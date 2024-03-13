#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>
#include <sstream>

bool operatore(const std::string& token);
int operation(int operand1, int operand2, const std::string& op);
int evaluate(const std::string& expression);
#endif