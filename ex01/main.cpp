#include "inc/Dog.hpp"
#include "inc/Cat.hpp"

int main()
{
    Animal* animals[10];

    for (int i = 0; i < 5; i++)
        animals[i] = new Dog();
    for (int i = 5; i < 10; i++)
        animals[i] = new Cat();

    Dog a;
    Dog b(a);
    a.getBrain()->setIdea(0, "gamberge!");
    std::cout << "a idea: " << a.getBrain()->getIdea(0) << std::endl;
    std::cout << "b idea: " << b.getBrain()->getIdea(0) << std::endl;

    for (int i = 0; i < 10; i++)
        delete animals[i];

    return 0;
}