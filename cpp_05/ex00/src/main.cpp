#include "../includes/Bureaucrat.hpp"

int main()
{
	try
	{
		std::cout << GREEN_C "First test" WHITE_C << std::endl;
		Bureaucrat Morgan = Bureaucrat("Morgan", 56);
		std::cout << Morgan << std::endl;
		Morgan.Downgrade();
		Morgan.Upgrade();
	}
	catch(std::exception &e)
	{
		std::cerr << RED_C << e.what() << WHITE_C << std::endl;
	}
	catch(...)
	{
		std::cerr << RED_C << "Unexpected behavior" << WHITE_C << std::endl;
	}
	std::cout << PURPLE_C "--------------------- NEW TEST ---------------------" WHITE_C << std::endl;
	try
	{
		std::cout << GREEN_C "Second test" WHITE_C << std::endl;
		Bureaucrat Morgan = Bureaucrat("Morgan", 0);
		std::cout << Morgan << std::endl;
		Morgan.Downgrade();
		Morgan.Upgrade();
	}
	catch(std::exception &e)
	{
		std::cerr << RED_C << e.what() << WHITE_C << std::endl;
	}
	catch(...)
	{
		std::cerr << RED_C << "Unexpected behavior" << WHITE_C << std::endl;
	}
	std::cout << PURPLE_C "--------------------- NEW TEST ---------------------" WHITE_C << std::endl;
	try
	{
		std::cout << GREEN_C "Third test" WHITE_C << std::endl;
		Bureaucrat Morgan = Bureaucrat("Morgan", 1);
		std::cout << Morgan << std::endl;
		Morgan.Downgrade();
		Morgan.Upgrade();
	}
	catch(std::exception &e)
	{
		std::cerr << RED_C << e.what() << WHITE_C << std::endl;
	}
	catch(...)
	{
		std::cerr << RED_C << "Unexpected behavior" << WHITE_C << std::endl;
	}
	std::cout << PURPLE_C "--------------------- NEW TEST ---------------------" WHITE_C << std::endl;
	try
	{
		std::cout << GREEN_C "Fourth test" WHITE_C << std::endl;
		Bureaucrat Morgan = Bureaucrat("Morgan", 1);
		std::cout << Morgan << std::endl;
		Morgan.Upgrade();
		Morgan.Downgrade();
	}
	catch(std::exception &e)
	{
		std::cerr << RED_C << e.what() << WHITE_C << std::endl;
	}
	catch(...)
	{
		std::cerr << RED_C << "Unexpected behavior" << WHITE_C << std::endl;
	}
	std::cout << PURPLE_C "--------------------- NEW TEST ---------------------" WHITE_C << std::endl;
	try
	{
		std::cout << GREEN_C "Fifth test" WHITE_C << std::endl;
		Bureaucrat Morgan = Bureaucrat("Morgan", 151);
		std::cout << Morgan << std::endl;
		Morgan.Upgrade();
		Morgan.Downgrade();
	}
	catch(std::exception &e)
	{
		std::cerr << RED_C << e.what() << WHITE_C << std::endl;
	}
	catch(...)
	{
		std::cerr << RED_C << "Unexpected behavior" << WHITE_C << std::endl;
	}
	return 0;
}
