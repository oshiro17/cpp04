#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include "Animal.hpp"

int main() 
{
{ 
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
std::cout<<"_____";
i->makeSound(); //will output the cat sound!
std::cout<<"_____";
j->makeSound();
meta->makeSound();
// delete meta;
delete i;
// delete j;

} 
std::cout<<"_____WRONG_____\n";
{ 
const WrongAnimal* meta = new WrongAnimal();
const WrongAnimal* i = new WrongCat();
std::cout << i->getType() << " " << std::endl;
std::cout<<"_____";
i->makeSound(); //will output the cat sound!
std::cout<<"_____";
meta->makeSound();
// delete meta;
delete i;
// delete j;
return 0;
}
}
__attribute__ ((destructor)) void destructor(void)
{
// system("leaks -q a.out");
}