#include "../inc/Animal.hpp"

Animal::Animal() : _type("")
{
	std::cout << GREEN << "Constructor Animal called" << RESET <<  std::endl;
}

Animal::~Animal()
{
	std::cout << GREEN << "Destructor Animal called" << RESET << std::endl;
}
Animal::Animal(const Animal &src) : _type(src._type)
{
	std::cout << GREEN << "Copy constructor Animal called" << RESET << std::endl;
}
Animal &Animal::operator=(const Animal &rhs)
{
	std::cout << GREEN << "Operator Animal called" << RESET << std::endl;
	if (this != &rhs)
        _type = rhs._type;
    return *this;
}

void Animal::makeSound() const
{
	std::cout << GREEN << "Animal sound" << RESET << std::endl;
}

std::string Animal::getType() const 
{
    return _type;
}