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
			std::cout << input[i] << std::endl;
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
			tmpValue++;
			valueCount++;
			tmpOperator = 0;
		}
		else if (input[i] == '-' || input[i] == '*' || input[i] == '/' || input[i] == '+')
		{
			tmpOperator++;
			operatorCount++;
			if (tmpOperator == tmpValue && valueCount != operatorCount + 1)
			{
				std::cerr << RED_C "Error: Bad Format" NC << std::endl;
				exit(EXIT_FAILURE);
			}
			tmpValue = 0;
		}
	}
	if (valueCount != operatorCount + 1)
	{
		std::cerr << RED_C "Error: Bad Format. To many operator" NC << std::endl;
		exit(EXIT_FAILURE);
	}
}