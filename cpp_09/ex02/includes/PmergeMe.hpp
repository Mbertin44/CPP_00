#pragma once

#include <string>
#include <iostream>
#include <list>
#include <vector>

#define BLACK_C     "\033[0;30m"
#define DARK_GRAY_C "\033[1;30m"
#define RED_C       "\033[0;31m"
#define LIGHT_RED_C "\033[1;31m"
#define GREEN_C     "\033[0;32m"
#define LIGHT_GREEN_C "\033[1;32m"
#define BROWN_C     "\033[0;33m"
#define YELLOW_C    "\033[1;33m"
#define BLUE_C      "\033[0;34m"
#define LIGHT_BLUE_C "\033[1;34m"
#define PURPLE_C    "\033[0;35m"
#define PINK_C      "\033[1;35m"
#define CYAN_C      "\033[0;36m"
#define LIGHT_CYAN_C "\033[1;36m"
#define LIGHT_GRAY_C "\033[0;37m"
#define WHITE_C     "\033[1;37m"
#define NC "\e[0m"

class PmergeMe
{
	public:
		PmergeMe();
		PmergeMe(PmergeMe &src);
		PmergeMe &operator=(PmergeMe &rhs);
		~PmergeMe();

		std::list<int>		getList();
		std::vector<int>	getVector();
		void				checkInvalidInput(char **input, int argc);
		void				printList();
		void				printVector();
		void				subVector(int start, int end);
		void				mergeInsertSubvector(int start, int middle, int end);
		void				subList(int start, int end);
		void				mergeInsertSublist(int start, int middle, int end);
	private:
		std::string input;
        std::list<int> 		list;
        std::vector<int>	vector;
};

