#include "../inc/Cat.hpp"

Cat::Cat()
{
	_type = "Cat";
	std::cout << "Constructor Cat called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Destructor Cat called" << std::endl;
}

Cat::Cat(const Cat &src) : Animal(src)
{
	std::cout << "Copy constructor Cat called" << std::endl;
}

Cat &Cat::operator=(const Cat &rhs)
{
	std::cout << "Operator Cat called" << std::endl;
	if (this != &rhs)
        Animal::operator=(rhs);
    return *this;
}

void Cat::makeSound() const
{
	std::cout << _type << "say Miaouu!" << std::endl;
}