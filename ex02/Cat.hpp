#ifndef CAT_HPP
# define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>
class Cat : public Animal
{
private:
    Brain   *_brain;
public:
    Cat(void);
    Cat(const Cat& obj);
    Cat& operator=(const Cat &obj);
	~Cat(void);
	void makeSound(void) const;
	const std::string*	getIdea(size_t idx) const;
};
#endif