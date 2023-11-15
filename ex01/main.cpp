#include "Animal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main() 
{ 
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;//should not create a leak 
    delete i;  
    return 0; 
}