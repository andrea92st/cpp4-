#ifndef BRAIN_HPP
#define BRAIN_HPP

#define PINK    "\033[38;5;198m"

#include "AAnimal.hpp"

class Brain
{
	protected :
				std::string ideas[100];
	public :
				Brain();
				~Brain();
				Brain(const Brain &src);
				Brain &operator=(const Brain &rhs);
				std::string getIdea(int index) const;
				void setIdea(int index, std::string idea);
};

#endif