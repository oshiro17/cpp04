#ifndef DOG_HPP
# define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>
class Dog : public Animal
{
private:
	Brain	*_brain;
public:
    Dog(void);
    Dog(const Dog& src);
    Dog& operator=(const Dog& obj);
    ~Dog(void);
    void makeSound(void) const;
	// const Brain*		getBrain(void) const;
	const std::string*	getIdea(size_t idx) const;
};
#endif