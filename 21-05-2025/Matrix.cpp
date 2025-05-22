#ifndef CLASS_MATRIX_CPP
#define CLASS_MATRIX_CPP

#include <iostream>

#include "Matrix.h"

void Matrix::putMatrix(int matrix[100][100], int rows, int cols) {
	std::cout << "Ingresar valores de la matriz" << std::endl << std::endl;

	for(unsigned i = 0; i < rows; i++) {
		for(unsigned j = 0; j < cols; j++) {
			std::cout << "M[" << i << "][" << j << "]: ";
			std::cin >> matrix[i][j];
		}
	}
}

void Matrix::showMatrix(int matrix[100][100], int rows, int cols) {
	for(unsigned i = 0; i < rows; i++) {
		for(unsigned j = 0; j < cols; j++) {
			std::cout << matrix[i][j] << "\t";
		}

		std::cout << std::endl;
	}
}

void Matrix::firstDiagonal(int matrix[100][100], int rows, int cols) {
	for(unsigned i = 0; i < rows; i++) {
		for(unsigned j = 0; j < cols; j++) {
			if(i == j) {
				std::cout << matrix[i][j];
			}
		}

		std::cout << std::endl;
	}
}

void Matrix::secondDiagonal(int matrix[100][100], int rows, int cols) {
	for(unsigned i = 0; i < rows; i++) {
		for(unsigned j = 0; j < cols; j++) {
			if(i + j == rows - 1) {
				std::cout << matrix[i][j];
			}
		}

		std::cout << std::endl;
	}
}

#endif