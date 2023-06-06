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
		Array<int> test1(50);
		Array<int> test2 = test1;
		std::cout << BLUE_C "The size of the array test1 is: " << test1.size() << std::endl;
		std::cout << "The adress of test1 is " << &test1 << std::endl;
		std::cout << "The element in the fourtheenth case in test1 is: " << test1[13] << std::endl;
		std::cout << PINK_C "\nThe size of the array test2 is: " << test2.size() << std::endl;
		std::cout << "The adress of test2 is " << &test2 << std::endl;
		std::cout << "The element in the fourtheenth case in test2 is: " << test2[13] << std::endl;
		std::cout << YELLOW_C "\nModification of the fourtheenth case in test 2\n" WHITE_C << std::endl;
		test2[13] = 53;
		std::cout << BLUE_C "The element in the fourtheenth case in test1 is: " << test1[13] << std::endl;
		std::cout << PINK_C "The element in the fourtheenth case in test2 is: " << test2[13] <<  WHITE_C << std::endl;
	}
	catch (std::exception &e){
		std::cerr << RED_C << e.what() << WHITE_C << std::endl;
	}
}