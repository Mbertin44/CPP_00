#include "../includes/PmergeMe.hpp"

PmergeMe::PmergeMe() : input()
{
	return;
}

PmergeMe::~PmergeMe()
{
	return;
}

PmergeMe::PmergeMe(PmergeMe &src)
{
	*this = src;
}

PmergeMe &PmergeMe::operator=(PmergeMe &rhs)
{
	if (this != &rhs)
	{
        this->input = rhs.input;
		this->list = rhs.list;
        this->vector = rhs.vector;
	}
	return (*this);
}

std::list<int>	PmergeMe::getList()
{
	return (list);
}

std::vector<int>	PmergeMe::getVector()
{
	return (vector);
}

void	PmergeMe::printList()
{
    for (std::list<int>::iterator it = list.begin(); it != list.end(); ++it)
        std::cout << *it << " ";
	std::cout << std::endl;
}

void	PmergeMe::printVector()
{
    for (std::vector<int>::iterator it = vector.begin(); it != vector.end(); ++it)
        std::cout << *it << " ";
	std::cout << std::endl;
}

void	PmergeMe::checkInvalidInput(char **input, int argc)
{
	for (int i = 1; i < argc; i++)
	{
		try 
		{
			int value = std::stoi(input[i]);
			list.push_back(value);
			vector.push_back(value);
		}
		catch (...)
		{
			std::cerr << RED_C "Error: " << input[i] << " is not a number" NC << std::endl;
			exit(EXIT_FAILURE);
		}
	}
	// std::cout << "list :" << std::endl;
	// printList();
	// std::cout << "vector :" << std::endl;
	// printVector();
}

void	PmergeMe::subVector(int start, int end)
{
	int middle = (start + end) / 2; // Je determine le milieu de ma liste

	if (start >= end) // Si il me reste juste une seul valeur
		return;
	subVector(start, middle); //Je sous divise du debut jusqu'au milieu 
	subVector(middle + 1, end); //Je sous divise du milieu + 1 jusqu'a la fin
	mergeInsertSubvector(start, middle, end);//J'appel ma fonction de tri
}

void	PmergeMe::mergeInsertSubvector(int start, int middle, int end)
{
	//Je vais créer deux variable pour encore diviser ma liste en deux "sous-liste"
	int leftIndex = start;
	int rightIndex = middle + 1;
	std::vector<int> tmp; //vector temporaire pour trier les valeurs

	// Je tri dans le vector temp
	while (leftIndex <= middle && rightIndex <= end)
	{
		if (vector[leftIndex] <= vector[rightIndex])
		{
			tmp.push_back(vector[leftIndex]);
			leftIndex++;
		}
		else
		{
			tmp.push_back(vector[rightIndex]);
			rightIndex++;
		}
	}

	/*
		J'insere les éléments restant dans mon vector temp. Par exemple si toute les valeurs dans la partie
		gauche de la liste sont inférieur a la partie de droite, il me reste des valeur dans la partie de droite 
		à insérer dans mon vector temp
	*/ 
	while(leftIndex <= middle)
	{
		tmp.push_back(vector[leftIndex]);
		leftIndex++;
	}
	while(rightIndex <= end)
	{
		tmp.push_back(vector[rightIndex]);
		rightIndex++;
	}

	/*
		Maintenant que mon vector temp est trié il faut que j'insere les éléments dans mon vector data
		Je vais me servir de l'index start (qui est un valeur différente à chaque appel de 
		mergeInsertSubvector()) qui sera la bonne position à vérifier dans data
	*/
	for (int i = start; i <= end; i++)
		vector[i] = tmp[i - start];
}

void	PmergeMe::subList(int start, int end)
{
	int middle = (start + end) / 2; // Je determine le milieu de ma liste

	if (start >= end) // Si il me reste juste une seul valeur
		return;
	subList(start, middle); //Je sous divise du debut jusqu'au milieu 
	subList(middle + 1, end); //Je sous divise du milieu + 1 jusqu'a la fin
	mergeInsertSublist(start, middle, end);//J'appel ma fonction de tri
}

void	PmergeMe::mergeInsertSublist(int start, int middle, int end)
{
	int leftIndex = start;
	int rightIndex = middle + 1;
	std::list<int>::iterator leftIt = list.begin();
	std::list<int>::iterator rightIt = list.begin();
	std::advance(leftIt, leftIndex);
	std::advance(rightIt, rightIndex);
	std::list<int> tmp; 

	while (leftIndex <= middle && rightIndex <= end)
	{
		if (*leftIt <= *rightIt)
		{
			tmp.push_back(*leftIt);
			leftIndex++;
			leftIt++;
		}
		else
		{
			tmp.push_back(*rightIt);
			rightIndex++;
			rightIt++;
		}
	}

	while(leftIndex <= middle)
	{
		tmp.push_back(*leftIt);
		leftIndex++;
		leftIt++;
	}
	while(rightIndex <= end)
	{
		tmp.push_back(*rightIt);
		rightIndex++;
		rightIt++;
	}

	std::list<int>::iterator itTmpList = tmp.begin();
	std::list<int>::iterator itList = list.begin();
	std::advance(itList, start);
	for (; start <= end; ++start)
	{
		*itList = *itTmpList;
		++itTmpList;
		++itList;
	}
}
