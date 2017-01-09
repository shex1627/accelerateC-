// ask and prints a person's name with a frame
#include <iostream>
#include <string>

int main()
{	
	//initializing the person's name
	std::string name;
	std::cout << "what is your name" << std::endl;
	std::cin >> name;
	
	//make the greeting
	std::string greeting = "Hello, " + name + "!";

	//making the second and the fourth frame
	std::string spaces(greeting.size(), ' ');
	std::string second = "* " + spaces + " *";

	//making the top and bottom
	std::string first(second.size(), '*');
	
	//print the whole frame
	std::cout << first << std::endl;
	std::cout << second << std::endl;
	std::cout << "* " + greeting + " *" << std::endl;
	std::cout << second << std::endl;
	std::cout << first << std::endl;

	return 0;
}
