#include "../includes/Array.hpp"

#define W "\e[0;107m"
#define NC "\e[0m"

int main () {
	std::cout <<GREEN_C "--------------- First test ---------------" WHITE_C << std::endl;
	try{
		Array<int> test;
		std::cout << "The size of the array is: " << test.size() << std::endl;
		std::cout << "The element in the first case is: " << test[0] << std::endl;
	}
	catch (std::exception &e){
		std::cerr << RED_C << e.what() << WHITE_C << std::endl;
	}
	std::cout <<GREEN_C "--------------- Seconde test ---------------" WHITE_C << std::endl;
	try{
		Array<int> test(50);
		std::cout << "The size of the array is: " << test.size() << std::endl;
		std::cout << test[51] << std::endl;
	}
	catch (std::exception &e){
		std::cerr << RED_C << e.what() << WHITE_C << std::endl;
	}
	std::cout <<GREEN_C "--------------- Third test ---------------" WHITE_C << std::endl;
	try{
		Array<int> test;
		std::cout << "The size of the array is: " << test.size() << std::endl;
		std::cout << test[13] << std::endl;
	}
	catch (std::exception &e){
		std::cerr << RED_C << e.what() << WHITE_C << std::endl;
	}
	std::cout <<GREEN_C "--------------- Fourth test ---------------" WHITE_C << std::endl;
	try{
		Array<int> test1(5);
		Array<int> test2(5);
		test2 = test1;
		// std::cout << "The size of the array test1 is: " << test1.size() << std::endl;
		// std::cout << "The size of the array test2 is: " << test2.size() << std::endl;
		// unsigned int i = 1;
		// test1[2] = i;
		// std::cout << "The element in the fourtheenth case is: " << test2[13] << std::endl;
	}
	catch (std::exception &e){
		std::cerr << RED_C << e.what() << WHITE_C << std::endl;
	}
}