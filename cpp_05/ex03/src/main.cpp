#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/Intern.hpp"

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
	std::cout << PURPLE_C "--------------------- NEW TEST ---------------------" WHITE_C << std::endl;
	{
		std::cout << GREEN_C "Seventh test" WHITE_C << std::endl;
		Intern intern;
		AForm *intern_form = intern.makeform("ShrubberyCreationForm", "shrubbery");
		if (intern_form)
		{
			std::cout << *intern_form << std::endl;
			delete intern_form;
		}
	}
	std::cout << PURPLE_C "--------------------- NEW TEST ---------------------" WHITE_C << std::endl;
	{
		std::cout << GREEN_C "Eight test" WHITE_C << std::endl;
		Intern intern2;
		AForm *intern_form2 = intern2.makeform("PresidentialPardonForm", "shrubbery");
		if (intern_form2)
		{
			std::cout << *intern_form2 << std::endl;
			delete intern_form2;
		}
	}
	std::cout << PURPLE_C "--------------------- NEW TEST ---------------------" WHITE_C << std::endl;
	{
		std::cout << GREEN_C "Nineth test" WHITE_C << std::endl;
		Intern intern3;
		AForm *intern_form3 = intern3.makeform("RobotomyRequestForm", "shrubbery");
		if (intern_form3)
		{
			std::cout << *intern_form3 << std::endl;
			delete intern_form3;
		}
	}
	std::cout << PURPLE_C "--------------------- NEW TEST ---------------------" WHITE_C << std::endl;
	{
		std::cout << GREEN_C "Tenth test" WHITE_C << std::endl;
		Intern intern4;
		AForm *intern_form4 = intern4.makeform("qdw", "shrubbery");
		if (intern_form4 != NULL)
		{
			std::cout << *intern_form4 << std::endl;
			delete intern_form4;
		}
	}
	return 0;
}
