#include <iostream>
#include "linear-algebra.hpp"

int main(){
	Matrix object = Matrix(1, 4);
	object.SetValue(0, 3, 1);
	Matrix translate = Matrix();
	Matrix rotate_x = Matrix();
	// Matrix rotate_y = Matrix();
	// Matrix rotate_z = Matrix();
	Matrix product = Matrix();

	translate.Translation(1.0, 1.0, 1.0);
	rotate_x.RotationX(30);
	// rotate_y.RotationY(45.0);
	// rotate_z.RotationZ(45.0);

	object.Print();
	translate.Print();
	rotate_x.Print();

	product = translate.Multiply(rotate_x);
	product.Print();
	product = object.Multiply(product);

	product.Print();
	return 0;
}
