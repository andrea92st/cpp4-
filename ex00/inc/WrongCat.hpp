#ifndef WRONG_WrongCAT_HPP
#define WRONG_WrongCAT_HPP

#include "WrongAnimal.hpp"


class WrongCat : public WrongAnimal
{
	private:

	public:
			WrongCat();
			~WrongCat();
			WrongCat(const WrongCat &src);
			WrongCat &operator=(const WrongCat &rhs);
			void makeSound() const;
};
#endif