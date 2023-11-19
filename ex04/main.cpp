#include "replace.hpp"


void	replace_f(std::string &filename, std::string &s1, std::string &s2)
{
	std::ifstream inputFile(filename);
	if (!inputFile.is_open())
	{
        std::cerr << "Error opening file: " << filename << std::endl;
        exit(2); // Return an error code
    }
	std::string line;
	while (std::getline(inputFile, line)) {
        std::cout << line << std::endl;
    }

}

int main(int ac, char **av)
{
	if(ac == 4)
	{
		std::string filename = av[1];
		std::string s1 = av[2];
		std::string s2 = av[3];
		replace_f(filename, s1, s2);
	}
	else
		std::cout << "incorrect number" << std::endl ;
	return 0;
}

