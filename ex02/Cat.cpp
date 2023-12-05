#include "Cat.hpp"

Cat::Cat(void)
{
    this->type = "Cat";
    this->_brain = new Brain();
    std::cout << "<Cat> Constructor called (" << this->type \
    << ")" << std::endl;
}

Cat::Cat(const Cat&obj)
{
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
    if (this != &obj)
    {
        this->type = obj.type;
	    std::cout << "<Cat> Copy assignment operator of Cat called(" << this->type \
    <<")"<<std::endl;
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
