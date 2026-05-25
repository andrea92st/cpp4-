#include "../inc/WrongCat.hpp"

WrongCat::WrongCat()
{
	_type = "WrongCat";
	std::cout << GREY << "Constructor WrongCat called" << RESET << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << GREY << "Destructor WrongCat called" << RESET << std::endl;
}

WrongCat::WrongCat(const WrongCat &src) : WrongAnimal(src)
{
	std::cout << GREY << "Copy constructor WrongCat called" << RESET << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &rhs)
{
	std::cout << GREY << "Operator WrongCat called" << RESET << std::endl;
	if (this != &rhs)
		WrongAnimal::operator=(rhs);
	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << GREY << _type << "say hello" << RESET << std::endl;
}