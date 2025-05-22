#include <iostream>

#include "Matrix.cpp"

int main() {
	int rows = 3, cols = 3;
	int m[100][100];
	
	Matrix matrix;

	matrix.putMatrix(m, rows, cols);

	std::cout << std::endl;

	matrix.showMatrix(m, rows, cols);

	std::cout << std::endl;

	matrix.firstDiagonal(m, rows, cols);

	std::cout << std::endl;

	matrix.secondDiagonal(m, rows, cols);

	return 0;
}