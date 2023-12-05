#include "Brain.hpp"

Brain::Brain(void)
{
     std::ostringstream ss;

    for (size_t i = 0; i < 100; i++)
    {
        std::ostringstream ss;
        ss.clear();
        ss << i;
        this->_ideas[i] = ss.str();
    }
    std::cout << "<Brain> Constructor called"<<std::endl;
}

Brain::Brain(const Brain& obj)
{
    *this = obj;
    std::cout << "<Brain> Copy constructor called"<<std::endl;
}

Brain& Brain::operator=(const Brain& obj)
{
    if (this != &obj)
    {
        for (size_t i = 0; i < 100; i++)
            this->_ideas[i] = obj.getIdea(i);
    std::cout << "<Brain> Copy asaiment constructor called"<<std::endl;
    }
    return *this;
}

Brain::~Brain()
{
    std::cout << "<Brain>Destructor called"<< std::endl;
}

const std::string	Brain::getIdea(size_t idx) const{
    return(this->_ideas[idx]);
}
