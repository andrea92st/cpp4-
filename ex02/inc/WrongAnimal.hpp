#ifndef WRONG_WrongANIMAL_HPP
#define WRONG_WrongANIMAL_HPP

#define YELLOW  "\033[33m"
#define RESET   "\033[0m"

#include <iostream>

class WrongAnimal{

	protected :
			std::string _type;
	public :
			WrongAnimal();
			~WrongAnimal();
			WrongAnimal(const WrongAnimal &src);
			WrongAnimal &operator=(const WrongAnimal &rhs);
			void makeSound() const;
			std::string getType() const;
	
};
#endif
