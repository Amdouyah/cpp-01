#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon{
	private:
		std::string type;
	public:
		void setType(std::string name);
		const std::string & getType();
	Weapon(std::string type);
	~Weapon();

};


#endif