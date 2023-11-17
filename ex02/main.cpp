#include <iostream>

using std::string;
using std::endl;
using std::cout;

// reference is an alias for an existing object

int main(){
	string var =  "HI THIS IS BRAIN";
	string  *stringPTR = &var;
	string &stringREF = var;

	cout << &var << endl;
	cout << stringPTR << endl;
	cout << &stringREF << endl;

	cout << "value of var : " << var << endl;
	cout << "value of stringPTR : " << *stringPTR << endl;
	cout << "value of stringREF : " << stringREF << endl;


	return 0;
}