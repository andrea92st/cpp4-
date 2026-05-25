#ifndef WRONG_WrongANIMAL_HPP
#define WRONG_WrongANIMAL_HPP

#include <iostream>

class WrongAnimal{

	protected :
			std::string _type;
	public :
			WrongAnimal();
			virtual ~WrongAnimal();
			WrongAnimal(const WrongAnimal &src);
			WrongAnimal &operator=(const WrongAnimal &rhs);
			void makeSound() const;
			std::string getType() const;
	
};
#endif
