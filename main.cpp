#include <iostream>
#include "linear-algebra.hpp"

int main(){
	Matrix matrix_1 = Matrix(1, 2);
	Matrix matrix_2 = Matrix(2, 6);
	Matrix product;

	matrix_1.SetRandomValues();
	matrix_2.SetRandomValues();

	product = matrix_1 * matrix_2;

	matrix_1.Print();
	matrix_2.Print();
	product.Print();
	return 0;
}
