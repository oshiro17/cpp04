#ifndef CAT_HPP
# define CAT_HPP
#include "Animal.hpp"
#include <iostream>
class Cat : public Animal
{
public:
    Cat(void);
    Cat(const Cat& obj);
    Cat& operator=(const Cat &obj);
    ~Cat(void);
    void makeSound(void) const;
};
#endif