#include <iostream>

#include "Helper.cpp"

int main() {
	int base, varPow;
	std::string word;

	std::cout << "Ingrese la base: ";
	std::cin >> base;

	std::cout << "Ingrese la potencia: ";
	std::cin >> varPow;

	Helper helper;

	std::cout << std::endl;

	std::cout << "La operación " << base << " ^ " << varPow << " es: " << helper.xPow(base, varPow) << std::endl << std::endl;

	std::cout << "Ingrese una palabra: ";
	std::cin >> word;

	std::cout << "La palabra [" << word << "]" << (helper.palindromo(word, word.length()) ? "" : " no") << " es palóndromo: " << std::endl;

	return 0;
}