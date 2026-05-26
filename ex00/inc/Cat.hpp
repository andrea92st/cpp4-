#ifndef CAT_HPP
#define CAT_HPP

#define BLUE    "\033[36m"

#include "Animal.hpp"

class Cat : public Animal
{
	private:

	public:
			Cat();
			~Cat();
			Cat(const Cat &src);
			Cat &operator=(const Cat &rhs);
			void makeSound() const;
};
#endif