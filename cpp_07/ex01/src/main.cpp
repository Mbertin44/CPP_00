#include "../includes/iter.tpp"

int main(){
	{
		std::cout <<GREEN_C "--------------- First test ---------------" WHITE_C << std::endl;
		int array[] = {1, 2, 3};
		iter<int>(array, 3, print);
	}
	{
		std::cout <<GREEN_C "--------------- Second test ---------------" WHITE_C << std::endl;
		char array[] = {'a', 'b', 'c'};
		iter<char>(array, 3, print);
	}
	{
		std::cout <<GREEN_C "--------------- Third test ---------------" WHITE_C << std::endl;
		float array[] = {1.47, 234234.6, 123123.3};
		iter<float>(array, 3, print);
	}
}

// class Awesome
// {
//   public:
//     Awesome( void ) : _n( 42 ) { return; }
//     int get( void ) const { return this->_n; }
//   private:
//     int _n;
// };

// std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

// int main() {
//   char tab[] = {'0', '1', '2', '3', '4'};
//   Awesome tab2[5];

//   iter( tab, 5, print<char> );
//   iter( tab2, 5, print<Awesome> );

//   return 0;
// }