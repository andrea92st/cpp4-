#include "../inc/Dog.hpp"

Dog::Dog()
{
	_type = "Dog";
	_brain = new Brain();
	std::cout << RED << "Constructor Dog called" << RESET << std::endl;
}

Dog::~Dog()
{
	delete _brain;
	std::cout << RED << "Destructor Dog called" << RESET << std::endl;
}

Dog::Dog(const Dog &src) : Animal(src)
{
	std::cout << RED << "Copy constructor Dog called" << RESET << std::endl;
	_brain = new Brain(*src._brain);
}

Dog &Dog::operator=(const Dog &rhs)
{
	std::cout << RED << "Operator Dog called" << RESET << std::endl;
	if (this != &rhs)
    {
        Animal::operator=(rhs);
        delete _brain;
        _brain = new Brain(*rhs._brain);
    }
    return *this;
}

void Dog::makeSound() const
{
	std::cout << RED << _type << " say WafWaf!" << RESET << std::endl;
}
Brain* Dog::getBrain() const
{
    return _brain;
}
