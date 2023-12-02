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
	// virtual void		makeSound(void) const;
	virtual void		makeSound(void) const=0;
    //純粋仮想関数
    virtual const std::string*	getIdea(size_t idx) const =0;
};
#endif