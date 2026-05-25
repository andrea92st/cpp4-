#include "../inc/WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("")
{
	std::cout << YELLOW << "Constructor WrongAnimal called" << RESET << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << YELLOW << "Destructor WrongAnimal called" << RESET << std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal &src) : _type(src._type)
{
	std::cout << YELLOW << "Copy constructor WrongAnimal called" << RESET << std::endl;
}
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs)
{
	std::cout << YELLOW << "Operator WrongAnimal called" << RESET << std::endl;
	if (this != &rhs)
        _type = rhs._type;
    return *this;
}

void WrongAnimal::makeSound() const
{
	std::cout << YELLOW << "WrongAnimal sound" << RESET << std::endl;
}

std::string WrongAnimal::getType() const
{
    return _type;
}