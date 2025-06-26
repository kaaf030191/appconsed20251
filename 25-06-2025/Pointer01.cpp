#include <iostream>

int main() {
	int x;
	int y;
	int *pointer = nullptr;

	x = 7;
	y = 5;

	std::cout << &x << " > " << x << std::endl;
	std::cout << &y << " > " << y << std::endl;

	y = x;
	x = 10;

	std::cout << std::endl;

	std::cout << &x << " > " << x << std::endl;
	std::cout << &y << " > " << y << std::endl;

	pointer = &x;

	std::cout << std::endl;

	std::cout << pointer << " > " << *pointer << std::endl;

	x = 100;

	std::cout << std::endl;

	std::cout << pointer << " > " << *pointer << std::endl;

	*pointer = 200;

	std::cout << std::endl;

	std::cout << &x << " > " << x << std::endl;

	pointer = &y;
	*pointer = 500;

	std::cout << std::endl;

	std::cout << &x << " > " << x << std::endl;
	std::cout << &y << " > " << y << std::endl;

	return 0;
}