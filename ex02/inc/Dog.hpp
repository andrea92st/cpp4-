#ifndef DOG_HPP
#define DOG_HPP

#define RED    "\033[35m"

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
	private:
			Brain *_brain;
	public:
			Dog();
			~Dog();
			Dog(const Dog &src);
			Dog &operator=(const Dog &rhs);
			void makeSound() const;
			Brain* getBrain() const;

};
#endif