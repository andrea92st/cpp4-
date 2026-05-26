#ifndef DOG_HPP
#define DOG_HPP

#define RED     "\033[35m"

#include "Animal.hpp"

class Dog : public Animal
{
	private:

	public:
			Dog();
			~Dog();
			Dog(const Dog &src);
			Dog &operator=(const Dog &rhs);
			void makeSound() const;

};
#endif