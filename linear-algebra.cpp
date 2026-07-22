#include <random>
#include <vector>
#include "linear-algebra.hpp"

Matrix::Matrix(){
	rows = 0;
	cols = 0;
	values = {{0}};
}

Matrix::Matrix(int rows, int cols){
	if(rows <= 0 || cols <= 0){
		std::cout << "Invalid value for row/collumn!" << std::endl;
		exit(-1);
	}
	this->rows = rows;
	this->cols = cols;
	this->values.resize(rows);
	for(int i = 0; i < rows; i++){
		this->values[i].resize(cols);
	}
}

float Matrix::GetValue(int row, int col){
	return values[row][col];
}

void Matrix::SetRandomValues(){
	std::random_device device;
	std::default_random_engine engine(device());
	std::uniform_int_distribution<int> uniform_dist(0, 5);
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
			values[i][j] = uniform_dist(engine);
		}
	}
}

void Matrix::Print(){
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
			std::cout << values[i][j] << " ";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
}

Matrix Matrix::operator*(Matrix rhs){
	if(this->cols != rhs.rows){
		std::cout << "Matrices cannot be multiplied!" << std::endl;
		exit(-1);
	}
	int m = this->rows;
	int n = rhs.cols;
	float helper = 0;
	Matrix product = Matrix(m, n);

	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			for(int k = 0; k < this->cols; k++){
				helper += this->values[i][k] * rhs.values[k][j];
			}
			product.values[i][j] = helper;
			helper = 0;
		}
	}

	return product;
}
