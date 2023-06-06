#include "../includes/easyfind.hpp"
#include <iterator>

int main () {
	std::cout <<GREEN_C "--------------- First test ---------------" WHITE_C << std::endl;
	try{
		std::cout << "Creating a array container of int with 5 value" << std::endl;
		std::array<int, 5> int_container = {0, 123, 3, 4, 1};
		std::cout << "Try to find occurence of value 1 inside the container" << std::endl;
		std::array<int, 5>::iterator occurence = easyfind(int_container, 1);
		std::cout << GREEN_C "Occurence have been found at index: " << std::distance(int_container.begin(), occurence) << WHITE_C << std::endl;
	}
	catch (const NotFind &e){
		std::cerr << RED_C << e.what() << WHITE_C << std::endl;
	}
	catch (...){
		std::cerr << RED_C << "Unexepted error ..." << WHITE_C << std::endl;
	}

	std::cout <<GREEN_C "\n--------------- Seconde test ---------------" WHITE_C << std::endl;
	try{
		std::cout << "Creating a array container of int with 5 value" << std::endl;
		std::array<int, 5> int_container = {0, 1, 3, 1, 4};
		std::cout << "Try to find occurence of value 1 inside the container" << std::endl;
		std::array<int, 5>::iterator occurence = easyfind(int_container, 65);
		std::cout << GREEN_C "Occurence have been found at index: " << std::distance(int_container.begin(), occurence) << WHITE_C << std::endl;
	}
	catch (const NotFind &e){
		std::cerr << RED_C << e.what() << WHITE_C << std::endl;
	}
	catch (...){
		std::cerr << RED_C << "Unexepted error ..." << WHITE_C << std::endl;
	}
	std::cout <<GREEN_C "\n--------------- Third test ---------------" WHITE_C << std::endl;
	try{
		std::cout << "Creating a array container of int with 5 value" << std::endl;
		std::array<int, 5> int_container = {0, 4, 1, 4, 12};
		std::cout << "Try to find occurence of value 1 inside the container" << std::endl;
		std::array<int, 5>::iterator occurence = easyfind(int_container, 1);
		std::cout << GREEN_C "Occurence have been found at index: " << std::distance(int_container.begin(), occurence) << WHITE_C << std::endl;
	}
	catch (const NotFind &e){
		std::cerr << RED_C << e.what() << WHITE_C << std::endl;
	}
	catch (...){
		std::cerr << RED_C << "Unexepted error ..." << WHITE_C << std::endl;
	}
	return (0);
	// try{

	// }
	// catch (std::exception &e){
	// 	std::cerr << RED_C << e.what() << WHITE_C << std::endl;
	// }
	// std::cout <<GREEN_C "--------------- Third test ---------------" WHITE_C << std::endl;
	// try{

	// }
	// catch (std::exception &e){
	// 	std::cerr << RED_C << e.what() << WHITE_C << std::endl;
	// }
	// std::cout <<GREEN_C "--------------- Fourth test ---------------" WHITE_C << std::endl;
	// try{

	// }
	// catch (std::exception &e){
	// 	std::cerr << RED_C << e.what() << WHITE_C << std::endl;
	// }
}