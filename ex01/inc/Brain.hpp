#ifndef BRAIN_HPP
#define BRAIN_HPP

#define PINK    "\033[38;5;198m"
#define RESET   "\033[0m"

#include <iostream>
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