#include "Dog.hpp"

Dog::Dog(void)
{
    this->type = "Dog";
    this->_brain = new Brain();
    std::cout <<"<Dog> Constructor called (" << this->type \
    <<")"<<std::endl;
}

Dog::Dog(const Dog&obj) : Animal(obj)
{
    this->_brain = NULL;
	*this = obj;
	std::cout << "<Dog> Copy Constructor called (" << this->type \
    <<")"<<std::endl;
    // printf()
}

Dog::~Dog()
{
    delete this->_brain;
    std::cout << "<Dog> Destructor called (" << this->type << ")" << std::endl;
}
Dog& Dog::operator=(const Dog& obj)
{
	    std::cout <<"<Dog> Copy assignment operator of Dog called(" << this->type \
    <<")"<<std::endl;
    if (this != &obj)
    {
        if (this->_brain != nullptr)
            delete this->_brain;
        this->_brain = new Brain(*obj._brain);
        this->type = obj.type;
        *this->_brain = *obj._brain;
    }
    return (*this);
}

void Dog::makeSound()const
{
	std::cout <<"<Dog> Woof! Woof!(" << this->type \
    <<")"<<std::endl;
}