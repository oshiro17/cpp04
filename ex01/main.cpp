#include "Animal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int	main()
{
	std::cout << std::endl << "_____Sample test_________" << std::endl;
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound();
		j->makeSound();
		meta->makeSound();
		delete meta;
		delete j;
		delete i;
	}

	std::cout << std::endl << "______Replace the Cat by WrongCat class_____" << std::endl;
	{
		const WrongAnimal* meta = new WrongAnimal();
		const Animal* j = new Dog();
		const WrongAnimal* i = new WrongCat();

		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();
		delete meta;
		delete j;
		delete i;
	}

	std::cout << std::endl << "__________copy constuctor and copy assignment operato_____" << std::endl;
	{
		std::cout << "\033[33mInstantiate Animal from Animal class\033[m" << std::endl;
		const Animal *meta = new Animal();
		const Animal j(*meta);
		Animal *i = new Animal();
		*i = j;


		meta->makeSound();
		j.makeSound();
		i->makeSound();

		delete meta;
		delete i;
	}
	{
		std::cout << std::endl << "\033[33mInstantiate Animal from Dog class\033[m" << std::endl;
		const Animal* meta = new Dog();
		const Animal j1(*meta);
		Animal* i = new Dog(); 
		*i = j1;

		meta->makeSound();
		j1.makeSound();
		i->makeSound();

		delete meta;
		delete i;
	}
	{

		std::cout << std::endl << "\033[33mInstantiate Dog from Doggy class\033[m" << std::endl;
		const Dog* meta = new Dog();
		const Dog j(*meta);
		Dog* i = new Dog(); 

		*i = j;
		meta->makeSound();
		j.makeSound();
		i->makeSound();
		delete meta;
		delete i;
	}
	return 0;
}

// __attribute__ ((destructor)) void destructor(void)
// {
// system("leaks -q a.out");
// }