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

void	to_char(char input)
{
	int input_ascii = static_cast<int>(input);
	std::cout << GREEN_C << "char: " << input_ascii << WHITE_C << std::endl;
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

void	to_float(std::string input)
{
	try{
		float input_float = std::stof(input);
		std::cout << GREEN_C << "float: " << input_float << WHITE_C << std::endl;
	}
	catch(std::invalid_argument){
		std::cout << RED_C << "float: impossible" << WHITE_C << std::endl;
	}
}

void	to_double(std::string input)
{
	try{
		float input_double = std::stod(input);
		std::cout << GREEN_C << "double: " << input_double << WHITE_C << std::endl;
	}
	catch(std::invalid_argument){
		std::cout << RED_C << "double: impossible" << WHITE_C << std::endl;
	}
}

void	check_to_char(std::string input){
	
}
int	main(int argc, char **argv){
	if (argc == 2){
		std::string input(argv[1]);
		if (input.length() == 1){
			to_char(argv[1][0]);
			to_int(input);
			to_float(input);
			to_double(input);
		}
		else{
			check_to_char(input);
			std::cout << RED_C << "char: Non displayable" WHITE_C << std::endl;

		}
	}
	else{
		std::cerr << RED_C "Bad argument" WHITE_C << std::endl;
	}
}