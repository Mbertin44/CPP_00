#include "../includes/RPN.hpp"

RPN::RPN(char *argv) : operatorCount(0), valueCount(0), input(argv)
{
	return;
}

RPN::~RPN()
{
	return;
}

RPN::RPN(RPN &src)
{
	*this = src;
}

RPN &RPN::operator=(RPN &rhs)
{
	if (this != &rhs)
	{
		this->stack = rhs.stack;
		this->operatorCount = rhs.operatorCount;
		this->valueCount = rhs.valueCount;
	}
	return (*this);
}

void	RPN::checkWrongCharacter()
{
	for (size_t i = 0; i < input.size(); i++)
	{
		if (!isdigit(input[i]) && input[i] != '+' && input[i] != '-' && input[i] != '*' && input[i] != '/' && input[i] != ' ')
		{
			std::cerr << RED_C "Error: wrong character" NC << std::endl;
			exit(EXIT_FAILURE);
		}
	}
}

void	RPN::checkFormat()
{
	int	tmpOperator = 0;
	int	tmpValue = 0;
	for (size_t i = 0; i < input.size(); i++)
	{
		if (isdigit(input[i]))
		{
			if (i < input.size() - 1 && input[i + 1] != ' ')
			{
				std::cerr << RED_C "Error: Bad Format. Space is missing" NC << std::endl;
				exit(EXIT_FAILURE);
			}
			tmpValue++;
			valueCount++;
			tmpOperator = 0;
		}
		else if (input[i] == '-' || input[i] == '*' || input[i] == '/' || input[i] == '+')
		{
			if (i < input.size() - 1 && input[i + 1] != ' ')
			{
				std::cerr << RED_C "Error: Bad Format. Space is missing" NC << std::endl;
				exit(EXIT_FAILURE);
			}
			tmpOperator++;
			operatorCount++;
			if (tmpOperator >= tmpValue && valueCount != operatorCount + 1)
			{
				std::cerr << RED_C "Error: Bad Format" NC << std::endl;
				exit(EXIT_FAILURE);
			}
			if (i + 2 < input.size() - 1 && isdigit(input[i + 2]))
				tmpValue = 0;
		}
	}
	if (valueCount != operatorCount + 1)
	{
		std::cerr << RED_C "Error: Bad Format. Wrong amount of operator" NC << std::endl;
		exit(EXIT_FAILURE);
	}
}

void	RPN::process()
{
	for (size_t i = 0; i < input.size(); i++)
	{
		if (isdigit(input[i]))
			stack.push(input[i] - '0');
		else if (input[i] == '-' || input[i] == '*' || input[i] == '/' || input[i] == '+')
		{
			int rhs = stack.top();
			stack.pop();
			int lhs = stack.top();
			stack.pop();
			switch (input[i])
			{
				case '+' :
					// std::cout << lhs << " + " << rhs << " = " << lhs + rhs << std::endl;
					stack.push(lhs + rhs);
					break;
				case '-' :
					// std::cout << lhs << " - " << rhs << " = " << lhs - rhs << std::endl;
					stack.push(lhs - rhs);
					break;
				case '*' :
					// std::cout << lhs << " * " << rhs << " = " << lhs * rhs << std::endl;
					stack.push(lhs * rhs);
					break;
				case '/' :
					if (rhs == 0)
					{
						std::cerr << RED_C "Error: division by zero : " << lhs << " / " << rhs << NC << std::endl;
						exit(EXIT_FAILURE);
					}
					// std::cout << lhs << " / " << rhs << " = " << lhs / rhs << std::endl;
					stack.push(lhs / rhs);
					break;
			}
		}
	}
	std::cout << stack.top() << std::endl;
}
