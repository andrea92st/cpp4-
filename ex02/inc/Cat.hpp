#ifndef CAT_HPP
#define CAT_HPP

#define BLUE    "\033[36m"
#define RESET   "\033[0m"

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
	private:
			Brain *_brain;
	public:
			Cat();
			~Cat();
			Cat(const Cat &src);
			Cat &operator=(const Cat &rhs);
			void makeSound() const;
			Brain* getBrain() const;

};
#endif