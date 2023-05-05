/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <mbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 13:39:37 by mbertin           #+#    #+#             */
/*   Updated: 2023/05/04 09:24:35 by mbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	int i = 1;
	int j = 0;

	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (argv[i])
	{
		j = 0;
		std::string arg = argv[i];
		while (arg[j])
		{
			if (arg[j] >= 97 && arg[j] <= 123)
				arg[j] -= 32;
			std::cout << arg[j];
			j++;
		}
		i++;
	}
	std::cout << std::endl;
	return (0);
}


/*
	$>./megaphone "shhhhh... I think the students are asleep..."
	SHHHHH... I THINK THE STUDENTS ARE ASLEEP...
	$>./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
	DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF.
	$>./megaphone
	* LOUD AND UNBEARABLE FEEDBACK NOISE *
	$>
*/