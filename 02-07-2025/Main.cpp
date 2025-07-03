#include <iostream>

int main() {
	int vectorLength;

	std::cout << "Ingrese la longitud del vector: ";
	std::cin >> vectorLength;

	int *pointer = new int[vectorLength];

	for(unsigned int i = 0; i < vectorLength; i++) {
		std::cout << "Ingrese V[" << i << "]:";
		// pointer += (i == 0 ? 0 : 1);
		// std::cin >> *pointer;

		std::cin >> *(pointer + i);
	}

	// std::cout << *pointer << std::endl;
	// std::cout << *(pointer + 1) << std::endl;
	// std::cout << *(pointer + 2) << std::endl;

	std::cout << std::endl;

	for(unsigned int i = 0; i < vectorLength; i++) {
		std::cout << pointer << " > " << (pointer + i) << " > " << *(pointer + i) << std::endl;
	}
}