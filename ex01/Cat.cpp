#include "Cat.hpp"

Cat::Cat(void)
{
    this->type = "Cat";
    this->_brain = new Brain();
    std::cout << "<Cat> Constructor called (" << this->type \
    << ")" << std::endl;
}

Cat::Cat(const Cat&obj):Animal(obj)
{
    this->_brain = NULL;
	*this = obj;
	std::cout << "<Cat> Copy Constructor called (" << this->type \
    <<")"<<std::endl;
}
Cat::~Cat()
{
	std::cout << "<Cat> Destructor called (" << this->type \
    <<")"<<std::endl;
    delete this->_brain;
}

Cat& Cat::operator=(const Cat& obj)
{
    std::cout <<"<Cat> Copy assignment operator of cat called(" << this->type \
    <<")"<<std::endl;
    if (this != &obj)
    {
        if (this->_brain != NULL)
            delete this->_brain;
        this->_brain = new Brain(*obj._brain);
        this->type = obj.type;
        *this->_brain = *obj._brain;
    }
	return (*this);
}

void Cat::makeSound()const
{
	std::cout << "<Cat> Meow! Meow!(" << this->type \
	<<")"<<std::endl;
}

std::string Cat::getBrain(size_t i)const
{
    return(this->_brain->getIdea(i));
}
