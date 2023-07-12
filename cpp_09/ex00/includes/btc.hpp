#include <string>
#include <iostream>
#include <iomanip>
#include <map>
#include <fstream>
#include <sstream>
#include <ctime>

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

class btc
{
	public:
		btc();
		btc(btc &src);
		btc &operator=(btc &rhs);
		~btc();
		void	checkArgc(int argc);
		void	checkDataCsv();
		void	checkInput(char *input);
		void	dataStorage();
		void	inputProcessing();
		void	commaParsing(std::string line);
		void	pipeParsing(std::string line);
		void	dashParsing(std::string date);
		void	dateParsing(std::string date);
		float	valueParsing(std::string date);
		int		dateToInt(std::string date);
	private:
		std::map<int, float> m_dataBtc;
		std::ifstream		m_data;
		std::ifstream		m_input;
		std::tm				m_time;
		std::istringstream	m_valid_date;
};