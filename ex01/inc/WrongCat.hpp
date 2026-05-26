#ifndef WRONG_WrongCAT_HPP
#define WRONG_WrongCAT_HPP

#define GREY    "\033[38;5;245m"

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