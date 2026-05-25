#include "../inc/WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("")
{
	std::cout << "Constructor WrongAnimal called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor WrongAnimal called" << std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal &src) : _type(src._type)
{
	std::cout << "Copy constructor WrongAnimal called" << std::endl;
}
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs)
{
	std::cout << "Operator WrongAnimal called" << std::endl;
	if (this != &rhs)
        _type = rhs._type;
    return *this;
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal sound" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return _type;
}