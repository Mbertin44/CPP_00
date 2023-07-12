#include "../includes/btc.hpp"

btc::btc() {return ;}

btc::~btc() {}

btc &btc::operator=(btc &rhs)
{
	if (this != &rhs)
	{
		this->m_dataBtc = rhs.m_dataBtc;
	}
	return (*this);
}

btc::btc(btc &src)
{
	*this = src;
}

void	btc::checkArgc(int argc)
{
	if (argc != 2)
	{
		std::cerr << RED_C "Bad argument" NC << std::endl;
		exit(EXIT_FAILURE);
	}
}

void	btc::checkDataCsv()
{
	this->m_data.open("data.csv");
	if (this->m_data.is_open() == false)
	{
		std::cerr << RED_C "Fail to open data.csv" NC << std::endl;
		exit(EXIT_FAILURE);
	}
}

void	btc::checkInput(char *input)
{
	this->m_input.open(input);
	if (this->m_input.is_open() == false)
	{
		std::cerr << RED_C "Fail to open the input" NC << std::endl;
		exit(EXIT_FAILURE);
	}
}

void	btc::dataStorage()
{
	std::string line;
	float	value;
	int		intDate;
	std::getline(this->m_data, line);
	while (getline(this->m_data, line))
	{
		commaParsing(line);
		size_t  split = line.find(',');
		std::string date = line.substr(0, split);
		dashParsing(date);
		if (dateParsing(date) == false)
			exit(EXIT_FAILURE);
		value = valueParsing(line.substr(split + 1));
		intDate = dateToInt(date);
		m_dataBtc[intDate] = value;
		// std::cout << intDate << " " << value << std::endl;
	}
}

void	btc::inputProcessing()
{
	std::string line;
	float	value;
	int		intDate;
	std::getline(m_input, line);
	while (getline(m_input, line))
	{
		if (pipeParsing(line) == true)
		{
			size_t  split = line.find('|');
			std::string date = line.substr(0, split - 1);
			dashParsing(date);
			if (dateParsing(date) == true)
			{
				value = valueParsing(line.substr(split + 2));
				if (std::stod(line.substr(split + 2)) < 0)
					std::cerr << RED_C "Error: not a positive number." NC << std::endl;
				else if (std::stod(line.substr(split + 2)) > 1000)
					std::cerr << RED_C "Error: too large a number." NC << std::endl;
				else
				{
					intDate = dateToInt(date);
					for (std::map<int, float>::reverse_iterator it = m_dataBtc.rbegin(); it != m_dataBtc.rend(); it++)
					{
						if (it->first <= intDate)
						{
							std::cout << date << " => " << value << " = " << value * it->second << std::endl;
							break;
						}
					}
				}
			}
		}
	}
}

void	btc::commaParsing(std::string line)
{
	if (line.find(',') == std::string::npos)
		{
			std::cerr << RED_C "Bad format in data.csv, comma is missing" NC << std::endl;
			exit(EXIT_FAILURE);
		}
}

bool	btc::pipeParsing(std::string line)
{
	if (line.find('|') == std::string::npos)
	{
		std::cerr << RED_C "Error: bad input => " << line << NC << std::endl;
		return (false);
	}
	return (true);
}

void	btc::dashParsing(std::string date)
{
	if (date.at(4) != '-' || date.at(7) != '-')
	{
		std::cerr << RED_C "Bad format, dash is not at the right place" NC << std::endl;
		exit(EXIT_FAILURE);
	}
}

bool	btc::dateParsing(std::string date)
{
	m_valid_date.clear();
	m_valid_date.str(date);
	m_valid_date >> std::get_time(&m_time, "%Y-%m-%d");
	if (m_valid_date.fail())
	{
		std::cerr << RED_C "Bad date format " << date << NC << std::endl;
		return(false);
	}
	return (true);
}

float	btc::valueParsing(std::string stringValue)
{
	try
	{
		float floatValue = std::stof(stringValue);
		return (floatValue);
	}
	catch (std::invalid_argument)
	{
		std::cerr << RED_C "Bad value format" NC << std::endl;
		exit(EXIT_FAILURE);
	}
}

int		btc::dateToInt(std::string date)
{
	int intDate = std::stoi(date.substr(0, 4) + date.substr(5, 2) + date.substr(8, 2));
	return (intDate);
}
