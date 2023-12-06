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
    delete this->_brain;
	std::cout << "<Cat> Destructor called (" << this->type \
    <<")"<<std::endl;
}

Cat& Cat::operator=(const Cat& obj)
{
	    std::cout <<"<Cat> Copy assignment operator of Cat called(" << this->type \
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


const std::string	Cat::getIdea(size_t idx) const
{
	return (this->_brain->getIdea(idx));
}
