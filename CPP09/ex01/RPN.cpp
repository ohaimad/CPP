#include "RPN.hpp"

bool operatore(const std::string& token) 
{
    return token == "+" || token == "-" || token == "*" || token == "/";
}

int operation(int operand1, int operand2, const std::string& op) 
{
    if (op == "+")
        return operand1 + operand2;
    else if (op == "-")
        return operand1 - operand2;
    else if (op == "*")
        return operand1 * operand2;
    else if (op == "/")
    {
        if (operand2 == 0) {
            std::cout << "Error: Division by zero" << std::endl;
            return 0;
        }
        return operand1 / operand2;
    }
    else
        return 0;  // Invalid operation
}

int evaluate(const std::string& expression) 
{
    std::stack<int> operands;
    std::stringstream ss(expression);
    std::string token;

    while (ss >> token) 
    {
        if (operatore(token))
        {
            std::cout << "S1 \n"<< std::endl;
            if (operands.size() < 2) 
            {
                std::cout << "S2 \n"<< std::endl;
                std::cout << "Error" << std::endl;
                return 0;
            }
            int operand2 = operands.top();
            operands.pop();

            int operand1 = operands.top();
            operands.pop();

            int result = operation(operand1, operand2, token);
            operands.push(result);
        } 
        else 
        {
            std::cout << "S5 \n"<< std::endl;
            int number;
            std::stringstream(token) >> number;
            operands.push(number);
        }
    }

    if (operands.size() == 1)
    {
        std::cout << "S3 \n"<< std::endl;
        return operands.top();
    }
    else 
    {
        std::cout << "S4 \n"<< std::endl;
        std::cout << "Error" << std::endl;
        return 0;
    }
}