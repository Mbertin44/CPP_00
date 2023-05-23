#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"

int main()
{
	try
	{
		std::cout << GREEN_C "First test" WHITE_C << std::endl;
		ShrubberyCreationForm tree("Tree");
		std::cout << tree << std::endl;
		Bureaucrat Morgan = Bureaucrat("Morgan", 144);
		std::cout << Morgan << std::endl;
		Morgan.Downgrade();
		Morgan.Upgrade();
		Morgan.signForm(tree);
		tree.execute(Morgan);
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
		ShrubberyCreationForm tree("Tree");
		std::cout << tree << std::endl;
		Bureaucrat Morgan = Bureaucrat("Morgan", 137);
		std::cout << Morgan << std::endl;
		Morgan.Downgrade();
		Morgan.Upgrade();
		Morgan.signForm(tree);
		tree.execute(Morgan);
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
		RobotomyRequestForm robot("Robot");
		std::cout << robot << std::endl;
		Bureaucrat Morgan = Bureaucrat("Morgan", 46);
		std::cout << Morgan << std::endl;
		Morgan.Downgrade();
		Morgan.Upgrade();
		Morgan.signForm(robot);
		robot.execute(Morgan);
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
		RobotomyRequestForm robot("Robot");
		std::cout << robot << std::endl;
		Bureaucrat Morgan = Bureaucrat("Morgan", 45);
		std::cout << Morgan << std::endl;
		Morgan.Downgrade();
		Morgan.Upgrade();
		Morgan.signForm(robot);
		robot.execute(Morgan);
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
		PresidentialPardonForm president("President");
		std::cout << president << std::endl;
		Bureaucrat Morgan = Bureaucrat("Morgan", 45);
		std::cout << Morgan << std::endl;
		Morgan.Downgrade();
		Morgan.Upgrade();
		Morgan.signForm(president);
		president.execute(Morgan);
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
		std::cout << GREEN_C "Sixth test" WHITE_C << std::endl;
		PresidentialPardonForm president("President");
		std::cout << president << std::endl;
		Bureaucrat Morgan = Bureaucrat("Morgan", 5);
		std::cout << Morgan << std::endl;
		Morgan.Downgrade();
		Morgan.Upgrade();
		Morgan.signForm(president);
		president.execute(Morgan);
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
