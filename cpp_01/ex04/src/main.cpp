/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <mbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 13:24:34 by mbertin           #+#    #+#             */
/*   Updated: 2023/04/27 16:32:06 by mbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <string>
#include <iostream>
#include <iomanip>

void	error(int error)
{
	if (error == 1)
		std::cout << "Wrong argument" << std::endl;
	else if (error == 2)
		std::cout << "Error opening file" << std::endl;
	exit(0);
}

void	open_input(const char *fd, std::ifstream &input)
{
	input.open(fd);
	if (input.is_open() == false)
		error(2);
}

void	replace_occurence(std::string &str, std::string occurence, std::string replacement)
{
	if (str.find(occurence) != std::string::npos)
	{
		int pos = str.find(occurence);
		str.erase(pos, occurence.length());
		str.insert(pos, replacement);
	}
}

std::string	input_content(std::ifstream &input, std::string occurence, std::string replacement)
{
	std::string content;
	std::string full_content;

	while (1)
	{
		if (getline(input, content))
		{
			replace_occurence(content, occurence, replacement);
			full_content.append(content);
			full_content.append("\n");
		}
		else
			break;
	}
	return (full_content);
}


void	create_output(char *filename, std::ofstream &output)
{
	std::string new_filename = filename;
	std::string replace = new_filename + ".replace";
	output.open(replace);
	if (output.is_open() == false)
		error(2);
}

int main (int argc, char **argv)
{

	std::ifstream input;
	std::ofstream output;
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	if (argc < 4)
		error(1);
	open_input(argv[1], input);
	std::string content = input_content(input, s1, s2);
	create_output(argv[1], output);
	output << content << std::endl;
	return 0;
}
