#include <iostream>
#include "linear-algebra.hpp"

int main(){
	Matrix camera = Matrix(4, 4);
	Matrix translation = Matrix(4, 4);
	Matrix object = Matrix(1, 4);
	Matrix product;

	camera.SetValue(0, 0, 1);
	camera.SetValue(1, 1, 1);
	camera.SetValue(2, 2, 1);
	camera.SetValue(3, 3, 1);

	translation.SetValue(0, 0, 1);
	translation.SetValue(1, 1, 1);
	translation.SetValue(2, 2, 1);
	translation.SetValue(3, 3, 1);

	translation.SetValue(3, 0, 0);
	translation.SetValue(3, 1, 0);
	translation.SetValue(3, 2, -5);

	object.SetValue(0, 0, 2);
	object.SetValue(0, 1, 5);
	object.SetValue(0, 2, -2);
	object.SetValue(0, 3, 1);

	product = object * translation;

	translation.Print();
	object.Print();
	product.Print();
	return 0;
}
