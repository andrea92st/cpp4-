#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#define GREEN   "\033[38;5;22m"
#define RESET   "\033[0m"

#include <iostream>

class AAnimal{

	protected:
				std::string _type;
	public:
				AAnimal();
				virtual ~AAnimal();
				AAnimal(const AAnimal &src);
				AAnimal &operator=(const AAnimal &rhs);
				virtual void makeSound() const = 0;
				std::string getType() const;
};

#endif