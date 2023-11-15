#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie{

	private:
		std::string name;
	public:
		void announce();
		void set(std::string name);
		std::string get();
};
Zombie* zombieHorde( int N, std::string name);

#endif