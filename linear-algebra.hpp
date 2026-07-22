#pragma once

#include <iostream>
#include <vector>

class Matrix{
public:
	Matrix();
	Matrix(int rows, int cols);

	float GetValue(int row, int col);
	void SetValue(int row, int col, float value);
	void SetRandomValues();
	void Print();
	Matrix Multiply(Matrix rhs);

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
// eigenvalues and eigenvectors calculations (autovalor e autovetor)
// gauss jordan
// inverse matrix
// scalar multiplication
// transpose

// TODO:
// Add the following functionalities
// GetRow
// GetCollumn
// GetNumRows
// GetNumCols
// SwapRows
// SwapCollumns
// Create identity matrix
// Create translation matrix
// Create scaling matrix
// Create rotation matrices
// Create identity matrix
// Determine if a square matrix is orthogonal
