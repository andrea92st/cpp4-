#include "../inc/Animal.hpp"

Animal::Animal() : _type("")
{
	std::cout << "Constructor Animal called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Destructor Animal called" << std::endl;
}
Animal::Animal(const Animal &src) : _type(src._type)
{
	std::cout << "Copy constructor Animal called" << std::endl;
}
Animal &Animal::operator=(const Animal &rhs)
{
	std::cout << "Operator Animal called" << std::endl;
	if (this != &rhs)
        _type = rhs._type;
    return *this;
}

void Animal::makeSound() const
{
	std::cout << "Animal sound" << std::endl;
}

std::string Animal::getType() const 
{
    return _type;
}