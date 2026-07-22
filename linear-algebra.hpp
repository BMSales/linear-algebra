#pragma once

#include <iostream>
#include <vector>

class Matrix{
public:
	Matrix();
	Matrix(int rows, int cols);

	float GetValue(int row, int col);
	void SetRandomValues();
	void Print();
	Matrix operator*(Matrix rhs);

private:
	int rows;
	int cols;
	std::vector<std::vector<float>> values;
};

// TODO:
// Add the following operations
// addition and subtraction
// adjugate matrix (too hard, maybe?)
// determinant
// eigenvalues and eigenvalue calculations (autovalor e autovetor)
// gauss jordan
// inverse matrix
// scalar multiplication
// transpose

// TODO:
// Add the following functionalities
// GetRow
// GetCollumn
// SwapRows
// SwapCollumns
// Create identity matrix
// Determine if a square matrix is orthogonal
