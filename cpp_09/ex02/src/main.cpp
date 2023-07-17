#include "../includes/PmergeMe.hpp"

int main(int argc, char** argv) 
{
    if (argc < 2)
    {
        std::cerr << RED_C "Error: Not enought arguments" NC << std::endl;
        exit (EXIT_FAILURE);
    }
    PmergeMe Pmerge;
    Pmerge.checkInvalidInput(argv, argc);
    std::cout << "Before: ";
    Pmerge.printVector();
    Pmerge.subVector(0, Pmerge.getVector().size() - 1);
    Pmerge.subList(0, Pmerge.getList().size() - 1);

    std::cout << "After: ";
    Pmerge.printVector();
    return 0;
}