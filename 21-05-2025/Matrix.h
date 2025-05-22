#ifndef CLASS_MATRIX_H
#define CLASS_MATRIX_H

#include <iostream>

class Matrix {
	public:
		void putMatrix(int matrix[100][100], int rows, int cols);
		void showMatrix(int matrix[100][100], int rows, int cols);
		void firstDiagonal(int matrix[100][100], int rows, int cols);
		void secondDiagonal(int matrix[100][100], int rows, int cols);
};

#endif