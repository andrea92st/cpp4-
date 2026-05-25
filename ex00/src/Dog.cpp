#include "../inc/Dog.hpp"

Dog::Dog()
{
	_type = "Dog";
	std::cout << "Constructor Dog called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Destructor Dog called" << std::endl;
}

Dog::Dog(const Dog &src) : Animal(src)
{
	std::cout << "Copy constructor Dog called" << std::endl;
}

Dog &Dog::operator=(const Dog &rhs)
{
	std::cout << "Operator Dog called" << std::endl;
	if (this != &rhs)
        Animal::operator=(rhs);
    return *this;
}

void Dog::makeSound() const
{
	std::cout << _type << " say WafWaf!" << std::endl;
}
