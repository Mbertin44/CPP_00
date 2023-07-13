#include "../includes/RPN.hpp"

int main(int argc, char** argv)
{
	if (argc != 2)
	{
		std::cerr << RED_C "Error: bad argument" NC << std::endl;
		exit(EXIT_FAILURE);
	}
	RPN rpn(argv[1]);
	rpn.checkWrongCharacter();
	rpn.checkFormat();
	return 0;
}