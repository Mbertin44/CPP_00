#include <string>
#include <iostream>


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

typedef struct s_data {
	int	value;
}		t_data;

uintptr_t serialize(t_data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

t_data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<t_data*>(raw));
}

/*
	En résumé reinterpret_cast va me permettre de stocker l'adresse de ma struct
	dans une variable de type uintptrt. C'est une mauvaise pratique et aussi un
	signe que mon code est mal structuré si j'ai besoin d'en arriver la mais
	peut-être tres pratique pour les besoins de la cause. ATTENTION IL N'Y
	A AUCUNE VERIFICATION PAR LE COMPILATEUR.
*/
int main() {
	t_data *data = new t_data;
	data->value = 53;
	std::cout << BLUE_C "data adress: " << data << " value = " << data->value << WHITE_C << std::endl;
	uintptr_t convert = serialize(data);
	// std::cout << BLUE_C "convert adress: " << convert << " value = " << convert.value << WHITE_C << std::endl;  //Ne fonctionnera pas car convert n'est plus une structure
	std::cout << PINK_C "convert adress: " << convert << WHITE_C << std::endl;
	data = deserialize(convert);
	std::cout << BLUE_C "data adress: " << data << " value = " << data->value << WHITE_C << std::endl;
	delete data;
	return 0;
}