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
	std::cout << WHITE_C "Pointer identify test ..." << std::endl;
	if(dynamic_cast<A*>(p))
		std::cout << GREEN_C "p is a class A at the origin" WHITE_C << std::endl;
	else if(dynamic_cast<B*>(p))
		std::cout << GREEN_C "p is a class B at the origin" WHITE_C << std::endl;
	else if(dynamic_cast<C*>(p))
		std::cout << GREEN_C "p is a class C at the origin" WHITE_C << std::endl;
}

/*
	Je ne peux pas faire le même genre de gestion d'erreur que quand le parametre p est un
	pointeur car dans le cas ou le dynamic_cast ne fonctionne pas il renverra
	NULL. SAUF QUE, contrairement à un pointeur, une référence ne peut pas être
	NULL. Donc si le cast échoue, dynamic_cast lève une exception au lieu de retourner une valeur null. Donc il m'est impossible de faire une comparaison if comme if(ma_conversion == NULL). Je dois vraiment passer par un try and catch.
*/
void identify(Base& p)
{
	std::cout << "Reference identify test ..." << std::endl;
	try
	{
		A convert = dynamic_cast<A&>(p);
		std::cout << GREEN_C "p is a class A at the origin" WHITE_C << std::endl;
	}
	catch (std::bad_cast &e){}
	catch (...){}
	try
	{
		B convert = dynamic_cast<B&>(p);
		std::cout << GREEN_C "p is a class B at the origin" WHITE_C << std::endl;
	}
	catch (std::bad_cast &e){}
	catch (...){}
	try
	{
		C convert = dynamic_cast<C&>(p);
		std::cout << GREEN_C "p is a class C at the origin" WHITE_C << std::endl;
	}
	catch (std::bad_cast &e){}
	catch (...){}
}

int main(){
	Base *test1 = generate();
	Base *test2 = generate();

	identify(test1); // Je donne le pointeur donc ca appel la fonction qui prend un pointeur
	identify(*test2); // Vue que je donne la valeur pointé, ca appel la fonction qui prend une référence
	delete test1;
	delete test2;
}