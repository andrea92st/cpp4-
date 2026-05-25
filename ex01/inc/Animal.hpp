#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#define GREEN   "\033[38;5;22m"
#define RESET   "\033[0m"

#include <iostream>

class Animal{

	protected:
				std::string _type;
	public:
				Animal();
				virtual ~Animal();
				Animal(const Animal &src);
				Animal &operator=(const Animal &rhs);
				virtual void makeSound() const;
				std::string getType() const;
};

#endif