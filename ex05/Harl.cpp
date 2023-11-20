#include "Harl.hpp"

Harl::Harl()
{
}
Harl::~Harl()
{
}

void Harl::debug()
{
	std::cout << "I love having extra bacon for my " ;
	std::cout << "7XL-double-cheese-triple-pickle-special-ketchup";
	std::cout << " burger. I really do!" << std::endl;
}

void Harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money.";
	std::cout <<  " You didn't put enough bacon in my burger! If you did, ";
	std::cout << "I wouldn't be asking for more!" << std::endl;
}

void Harl::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free.";
	std::cout << " I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error()
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
	void (Harl::*ptr[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string functions[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for(int i = 0; i < 4; i++)
	{
		if (functions[i] == level)
			(this->*ptr[i])();
	}
}