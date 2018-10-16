#include "pch.h"
#include <string>
#include <iostream>

bool uniqueCharacters(std::string str)
{
	for (int i = 0; i < str.length(); i++) {
		for (int j = i + 1; j < str.length(); j++) {
			if (str[i] == str[j]) {
				return false;
			}
		}
	}
	return true;
}


int main()
{
	std::string str;
	getline(std::cin, str);

	if (uniqueCharacters(str)) 
	{
		std::cout << "The String " << str
			<< " has all unique characters\n";
	}
	else {
		std::cout << "The String " << str
			<< " has duplicate characters\n";
	}
	return 0;
}