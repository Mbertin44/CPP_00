#include <string>
#include <iostream>

#define BLACK_C     "\033[0;30m"
#define DARK_GRAY_C "\033[1;30m"
#define RED_C       "\033[0;31m"
#define LIGHT_RED_C "\033[1;31m"
#define GREEN_C     "\033[0;32m"
#define LIGHT_GREEN_C "\033[1;32m"
#define BROWN_C     "\033[0;33m"
#define YELLOW_C    "\033[1;33m"
#define BLUE_C      "\033[0;34m"
#define LIGHT_BLUE_C "\033[1;34m"
#define PURPLE_C    "\033[0;35m"
#define PINK_C      "\033[1;35m"
#define CYAN_C      "\033[0;36m"
#define LIGHT_CYAN_C "\033[1;36m"
#define LIGHT_GRAY_C "\033[0;37m"
#define WHITE_C     "\033[1;37m"

void	impossible_input()
{
	std::cout << RED_C << "char: impossible" << WHITE_C << std::endl;
	std::cout << RED_C << "int: impossible" << WHITE_C << std::endl;
	std::cout << RED_C << "double: impossible" << WHITE_C << std::endl;
	std::cout << RED_C << "float: impossible" << WHITE_C << std::endl;
}

bool	is_valid_argument(std::string input)
{
	if (input == "-inf" || input == "+inf" || input == "nan" || input == "-inff" || input == "+inff" || input == "nanf")
		return(true);
	else{
	for (int i = 0; i < static_cast<int>(input.length()); i++)
	{
		if (isalpha(static_cast<int>(input[i])))
			return(false);
		if (input[i] == '.')
		{
			++i;
			if (!isnumber(input[i]))
				return (false);
			while(isnumber(input[i]))
				++i;
			if (input[i] && input[i] != 'f')
				return (false);
		}
	}
	}
	return (true);
}

void	to_int(std::string input)
{
	try{
		int input_int = std::stoi(input);
		std::cout << GREEN_C << "int: " << input_int << WHITE_C << std::endl;
	}
	catch(std::invalid_argument){
		std::cout << RED_C << "int: impossible" << WHITE_C << std::endl;
	}
}

void	to_double(std::string input)
{
	try{
		double input_double = std::stod(input);
		std::cout << std::fixed << GREEN_C << "double: " << input_double << WHITE_C << std::endl;
	}
	catch(std::invalid_argument){
		std::cout << RED_C << "double: impossible" << WHITE_C << std::endl;
	}
}

void	to_float(std::string input)
{
	try{
		float input_float = std::stof(input);
		std::cout << std::fixed << GREEN_C "float: " << input_float << "f" WHITE_C << std::endl;
	}
	catch(std::invalid_argument){
		std::cout << RED_C << "float: impossible" << WHITE_C << std::endl;
	}
}

void	pos_inf_display(){
	std::cout << RED_C << "char: impossible" << WHITE_C << std::endl;
	std::cout << RED_C << "int: impossible" << WHITE_C << std::endl;
	std::cout << GREEN_C << "float: +inff" << WHITE_C << std::endl;
	std::cout << GREEN_C << "double: +inf" << WHITE_C << std::endl;
}

void	neg_inf_display(){
	std::cout << RED_C << "char: impossible" << WHITE_C << std::endl;
	std::cout << RED_C << "int: impossible" << WHITE_C << std::endl;
	std::cout << GREEN_C << "float: -inff" << WHITE_C << std::endl;
	std::cout << GREEN_C << "double: -inf" << WHITE_C << std::endl;
}

void	nan_display(){
	std::cout << RED_C << "char: impossible" << WHITE_C << std::endl;
	std::cout << RED_C << "int: impossible" << WHITE_C << std::endl;
	std::cout << GREEN_C << "float: nanf" << WHITE_C << std::endl;
	std::cout << GREEN_C << "double: nan" << WHITE_C << std::endl;
}

void	convert(std::string input)
{
	if (input == "-inf" || input == "-inff")
		neg_inf_display();
	else if (input == "+inf" || input == "+inff")
		pos_inf_display();
	else if (input == "nan" || input == "nanf")
		nan_display();
	else {
		try{
			if (input.back() == 'f')
				input.pop_back();
			int input_int = std::stoi(input);
			if (input_int <= 126 && input_int >= 32)
				std::cout << GREEN_C << "char: " << static_cast<char>(input_int) << WHITE_C << std::endl;
			else
				std::cout << RED_C << "char: Non displayable" << WHITE_C << std::endl;
			to_int(input);
			to_float(input);
			to_double(input);
		}
		catch(std::invalid_argument){
			impossible_input();
		}
		catch(std::out_of_range){
			impossible_input();
		}
	}
}


void	one_char_convert(std::string input)
{
	char c = input[0];
	int ascii = static_cast<int>(c);
	if (isdigit(ascii)){
		std::cout << RED_C << "char: Non displayable" << WHITE_C << std::endl;
		to_int(input);
		to_float(input);
		to_double(input);
	}
	else {
		std::cout << GREEN_C << "char: " << input << WHITE_C << std::endl;
		std::cout << GREEN_C << "int: " << static_cast<int>(c) << WHITE_C << std::endl;
		std::cout << GREEN_C << "double: " << static_cast<double>(c) << ".0" WHITE_C << std::endl;
		std::cout << GREEN_C << "float: " << static_cast<float>(c) << ".0f" WHITE_C << std::endl;

	}
}

int	main(int argc, char **argv){
	if (argc == 2){
		std::string input(argv[1]);
		if (input.length() == 1)
			one_char_convert(input);
		else if(is_valid_argument(input) == false)
			impossible_input();
		else
			convert(input);
	}
	else{
		std::cerr << RED_C "Bad argument" WHITE_C << std::endl;
	}
}

// tester +10 ou -10