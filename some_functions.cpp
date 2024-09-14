#include "some_functions.h"

#include <iostream>

void PrintHello() {
	std::cout << "Hello word" << std::endl;
}

char GetSymbol() {
	char symbol;
	std::cout << "Input char: ";
	std::cin >> symbol;
	return symbol;
}

void PrintSymbol(char symbol) {
	std::cout << symbol << std::endl;
}