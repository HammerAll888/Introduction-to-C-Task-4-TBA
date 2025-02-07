#include <iostream>

using std::string;

int main()
{
	string playerName;

	std::cout << "Hello Adventurer and welcome!\n";
	std::cout << "What is your name brave one?\n";
	std::cin >> playerName;
	std::cout << "Greetings " << playerName << "";
}
