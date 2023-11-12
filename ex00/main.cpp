#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include "Animal.hpp"

int main() 
// { 
// const Animal* meta = new Animal(); 
// // const Animal* j = new Dog(); 
// const Animal* i = new Cat(); 
// // std::cout << j->getType() << " " << std::endl; 
// std::cout << i->getType() << " " << std::endl; 
// i->makeSound(); //will output the cat sound! 
// // j->makeSound(); 
// meta->makeSound();
// delete meta;
// delete i;
// return 0; 
// } 
{ 
const WrongAnimal* meta = new WrongAnimal(); 
// const WrongAnimal* j = new Dog(); 
const WrongAnimal* i = new WrongCat(); 
// std::cout << j->getType() << " " << std::endl; 
std::cout << i->getType() << " " << std::endl; 
i->makeSound(); //will output the cat sound! 
// j->makeSound(); 
meta->makeSound();
delete meta;
delete i;
return 0; 
} 