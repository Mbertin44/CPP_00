#include <string>
#include <iostream>
#include <stack>
#include <stack>

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

class RPN
{
	public:
		RPN(char *argv);
		RPN(RPN &src);
		RPN &operator=(RPN &rhs);
		~RPN();
		void	checkWrongCharacter();
		void	checkFormat();
		void	process();
	private:
		std::stack<int> stack;
		int				operatorCount;
		int				valueCount;
		std::string		input;
};

