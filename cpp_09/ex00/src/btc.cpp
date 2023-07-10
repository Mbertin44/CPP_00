#include "../includes/btc.hpp"

btc::btc() {return ;}

btc::~btc() {}

btc &btc::operator=(btc &rhs)
{
	this->temp = rhs.temp;
	return (*this);
}

btc::btc(btc &src)
{
	(void) src;
	// if (this != &src)
	// {

	// }
}
