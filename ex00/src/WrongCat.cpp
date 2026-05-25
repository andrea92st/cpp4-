#include "../inc/WrongCat.hpp"

WrongCat::WrongCat()
{
	_type = "WrongCat";
	std::cout << "Constructor Cat called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "Destructor Cat called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &src) : WrongAnimal(src)
{
	std::cout << "Copy constructor Cat called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &rhs)
{
	std::cout << "Operator WrongCat called" << std::endl;
	if (this != &rhs)
		WrongAnimal::operator=(rhs);
	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << _type << "say hello" << std::endl;
}