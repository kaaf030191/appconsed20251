#include <iostream>

#include "Helper.cpp"

int main() {
	int x;
	int myVector[] = { 1, 2, 3, 4, 5, 6, 7 };

	std::cout << "Ingrese un número entero para obtener su factorial y suma de números anteriores: ";
	std::cin >> x;

	Helper helper;

	std::cout << std::endl;

	std::cout << "El factorial del nro [" << x << "] es: " << helper.factorial(x) << std::endl;
	std::cout << "La sumatoria de los [" << x << "] primeros numeros enteros positivos es (R): " << helper.addNumber(x, "recursion") << std::endl;
	std::cout << "La sumatoria de los [" << x << "] primeros numeros enteros positivos es (L): " << helper.addNumber(x, "loop") << std::endl;
	std::cout << "La sumatoria de los [" << x << "] primeros numeros enteros positivos es (F): " << helper.addNumber(x, "formula") << std::endl;
	std::cout << "La sumatoria de los elementos del vector es: " << helper.addVector(myVector, (sizeof(myVector) / sizeof(int)) - 1) << std::endl;

	return 0;
}