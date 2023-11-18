#include "replace.hpp"

void	replace_f(std::string &filename, std::string &s1, std::string &s2)
{
	
}

int main(int ac, char **av)
{
	if(ac == 4)
	{
		std::string filename = av[1];
		std::string s1 = av[2];
		std::string s2 = av[3];
	}
	else
		std::cout << "incorrect number" << std::endl ;
	return 0;
}

