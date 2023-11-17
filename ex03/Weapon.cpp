#include "Weapon.hpp"

void Weapon::setType(std::string name)
{
	type = name;
}
const std::string & Weapon::getType()
{
	return(type);
}