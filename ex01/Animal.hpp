#ifndef ANIMAL_HPP
# define ANIMAL_HPP
#include <iostream>
class Animal
{
protected:
    std::string type;
public:
    Animal();
    Animal(const Animal& obj);
    virtual ~Animal();
    Animal& operator=(const Animal& obj);
    const std::string&	getType(void) const;
	virtual void		makeSound(void) const;
    virtual const std::string	getBrain(size_t idx) const;
};
#endif