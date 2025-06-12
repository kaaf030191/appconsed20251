#include <iostream>

#include "Helper.cpp"

int main() {
	int n, amount;
	Helper helper;

	std::cout << "Ingrese la cantidad de niveles: ";
	std::cin >> n;

	std::cout << "La cantidad de cajas es: " << helper.boxCount(n);

	std::cout << std::endl << std::endl;

	std::cout << "Ingrese el monto del dinero a contar: ";
	std::cin >> amount;

	helper.moneyCount(amount);

	return 0;
}