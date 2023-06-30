#include "../includes/Span.hpp"

void	fillVector(std::vector<int> &vec, int count)
{
	for (int i = 0; i != count; i++)
		vec.push_back(rand() % 100);
}

int main()
{
	Span sp(60); //Changer le param pour modifier la limite de la span
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	std::vector<int> vec;
	fillVector(vec, 50); // Je remplie mon vector vec
	sp.fillSpan(vec); // Je remplie la span avec mon vector vec
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	sp.fillSpan(vec); // Va generer une erreur car la span depassera sa limite
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	return 0;
}
