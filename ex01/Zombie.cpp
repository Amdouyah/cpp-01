#include "Zombie.hpp"

void Zombie::announce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..."<< std::endl;
}
void Zombie::set(std::string name)
{
	this->name = name;
}
std::string Zombie::get()
{
	return(this->name);
}