#include "../inc/Cat.hpp"

Cat::Cat()
{
	_type = "Cat";
	_brain = new Brain();
	std::cout << BLUE << "Constructor Cat called" << RESET << std::endl;
}

Cat::~Cat()
{
	delete _brain;
	std::cout << BLUE << "Destructor Cat called" << RESET << std::endl;
}

Cat::Cat(const Cat &src) : AAnimal(src)
{
	std::cout << BLUE << "Copy constructor Cat called" << RESET << std::endl;
	_brain = new Brain(*src._brain);
}

Cat &Cat::operator=(const Cat &rhs)
{
	std::cout << BLUE << "Operator Cat called" << RESET << std::endl;
	if (this != &rhs)
    {
        AAnimal::operator=(rhs);
        delete _brain;
        _brain = new Brain(*rhs._brain);
    }
    return *this;
}

void Cat::makeSound() const
{
	std::cout << BLUE << _type << " say Miaouu!"  << RESET << std::endl;
}
Brain* Cat::getBrain() const
{
    return _brain;
}