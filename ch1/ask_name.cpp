//ask for someone's name, and 'greet' the person
#include <iostream>
#include <string>

int main()
{
	//ask for the person's name
	std::cout << "Please tell me your name: ";

	//read the name
	std::string name;	// define name
	std::cin >> name;	// read from input to variable 'name'
	
	// write a greeting
	std::cout << "Hello, " << name << ", nice to see you!" << std::endl;
	return 0;
}
