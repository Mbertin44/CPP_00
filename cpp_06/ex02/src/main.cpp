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

class Base
{
public:
	virtual ~Base();
};

Base::~Base()
{
}

class A : public Base
{
};

class B : public Base
{
};

class C : public Base
{
};

Base *generate(void)
{
	srand(time(NULL));
	int random = rand() % 3;
	switch (random)
	{
		case 0:
			return(new A);
		case 1:
			return(new B);
		default:
			return(new C);
	}
}

void identify(Base* p)
{
	if(dynamic_cast<A*>(p))
		std::cout << "p is a class A at the origin" << std::endl;
	else if(dynamic_cast<B*>(p))
		std::cout << "p is a class B at the origin" << std::endl;
	else if(dynamic_cast<C*>(p))
		std::cout << "p is a class C at the origin" << std::endl;
}

void identify(Base& p)
{
	A convert;
	convert = dynamic_cast<A&>(p);
	if (dynamic_cast<A&>(p))
}

int main() {
	t_data *data = new t_data;
	data->value = 53;
	std::cout << BLUE_C "data adress: " << data << " value = " << data->value << WHITE_C << std::endl;
	uintptr_t convert = serialize(data);
	//std::cout << BLUE_C "convert adress: " << convert << " value = " << convert.value << WHITE_C << std::endl;  //Ne fonctionnera pas car convert n'est plus une structure
	std::cout << PINK_C "convert adress: " << convert << WHITE_C << std::endl;
	data = deserialize(convert);
	std::cout << BLUE_C "data adress: " << data << " value = " << data->value << WHITE_C << std::endl;
	delete data;
	return 0;
}