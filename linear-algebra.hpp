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
