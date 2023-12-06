#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include "Animal.hpp"

int main() 
{
{
    std::cout<<"____test dor basic bihaviors_______"<<std::endl;
    const Animal *j = new Dog();
    const Animal *i = new Cat();
    const Dog dog;
    const Cat cat;
    j->makeSound();
    i->makeSound();
    delete j;
    delete i;
}
{
    std::cout<< std::endl << "________test for copy constructor______"<< std::endl;
    const Animal* j = new Dog();
    Animal* i = new Dog();
    *i = *j;
    j->makeSound();
    i->makeSound();
    delete j;
    delete i;
}
{
    const Dog* j0 = new Dog();
    const Dog j1(*j0);
    Dog* j2 = new Dog();
    *j2 = j1;
    
    j0->makeSound();
    j1.makeSound();
    j2->makeSound();
    delete j0;
    delete j2;
}
}
// __attribute__ ((destructor)) void destructor(void)
// {
// system("leaks -q a.out");
// }