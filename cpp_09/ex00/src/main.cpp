#include "../includes/btc.hpp"

int main(int argc, char const *argv[])
{
	(void)argv;
	if (argc != 2)
	{
		std::cerr << RED_C "Bad argument" WHITE_C << std::endl;
		return 0;
	}
	std::ifstream file;
	file.open("data.csv", std::ifstream::in);
	if (file.is_open() == false)
	{
		std::cerr << RED_C "Bad argument" WHITE_C << std::endl;
		return 0;
	}
	btc btcData;
	std::string line;
	std::getline(file, line);
	while (std::getline(file, line))
	{

	}
	return 0;
}
