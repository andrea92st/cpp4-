#ifndef WRONG_WrongANIMAL_HPP
#define WRONG_WrongANIMAL_HPP

#define YELLOW  "\033[33m"

#include "Animal.hpp"


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
