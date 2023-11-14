#include "Animal.hpp"

Animal::Animal() : type("hogemaru")
{
   std::cout << "<Animal> Constructor called(" << this->type \
    <<")"<<std::endl;
}
const std::string*	Animal::getIdea(size_t idx) const {
	// return (NULL);
	return (&this->type);
	static_cast<void>(idx);
}

Animal::Animal(const Animal& obj)
{
    *this = obj;
    std::cout << "<Animal> Copy constructor called(" << this->type \
    <<")"<<std::endl;
}
Animal::~Animal()
{

	std::cout << "<Animal> Destructor called (" << this->type \
    <<")"<<std::endl;
}


Animal& Animal::operator=(const Animal& obj)
{
    if (this != &obj)
    {
        this->type = obj.type;
	   std::cout << "<Animal> Copy assignment operator called(" << this->type \
    <<")"<<std::endl;
    }
    return (*this);
}

void Animal::makeSound() const 
{
    std::cout << "<Animal> Some generic animal sound(" << this->type \
    <<")"<<std::endl;
}

const std::string& Animal::getType() const 
{
    return type;
}