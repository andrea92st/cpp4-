#include "../inc/AAnimal.hpp"

AAnimal::AAnimal() : _type("")
{
	std::cout << GREEN << "Constructor AAnimal called" << RESET <<  std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << GREEN << "Destructor AAnimal called" << RESET << std::endl;
}
AAnimal::AAnimal(const AAnimal &src) : _type(src._type)
{
	std::cout << GREEN << "Copy constructor AAnimal called" << RESET << std::endl;
}
AAnimal &AAnimal::operator=(const AAnimal &rhs)
{
	std::cout << GREEN << "Operator AAnimal called" << RESET << std::endl;
	if (this != &rhs)
        _type = rhs._type;
    return *this;
}

void AAnimal::makeSound() const
{
}

std::string AAnimal::getType() const 
{
    return _type;
}