#include "inc/Dog.hpp"
#include "inc/Cat.hpp"

int main()
{
	//AAnimal j;
	AAnimal* animals[2];
    animals[0] = new Dog();
    animals[1] = new Cat();

	for (int i = 0; i < 2; i++)
        animals[i]->makeSound();

	Dog a;
    a.getBrain()->setIdea(0, "gamberge!");
    Dog b(a);
    a.getBrain()->setIdea(0, "bien");
    std::cout << "a: " << a.getBrain()->getIdea(0) << std::endl;
    std::cout << "b: " << b.getBrain()->getIdea(0) << std::endl;

    for (int i = 0; i < 2; i++)
        delete animals[i];
    return 0;
}