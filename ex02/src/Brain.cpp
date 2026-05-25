#include "../inc/Brain.hpp"

Brain::Brain()
{
	std::cout << PINK  << "Constructor Brain called" << RESET << std::endl;
}
Brain::~Brain()
{
	std::cout << PINK << "Destructor Brain called" << RESET << std::endl;
}
Brain::Brain(const Brain &src)
{
	for (int i = 0; i < 100; i++)
        ideas[i] = src.ideas[i];
    std::cout << PINK << "Copy constructor Brain called" << RESET << std::endl;
}
Brain &Brain::operator=(const Brain &rhs)
{
	std::cout << PINK << "Operator Brain called" << RESET << std::endl;
	if (this != &rhs)
        for (int i = 0; i < 100; i++)
            ideas[i] = rhs.ideas[i];
    return *this;
}
std::string Brain::getIdea(int index) const
{
    return ideas[index];
}

void Brain::setIdea(int index, std::string idea)
{
    ideas[index] = idea;
}