#include "Matrix.h"
#include <ncurses.h>

Matrix::Matrix(int M, int N)
{
	this->M = M;
	this->N = N;
	createMatrix();
}



void Matrix::createMatrix()
{
	vector < vector <int> > matrix(M, vector<int>(N,0));
	this->matrix = matrix;
}

void Matrix::printMatrix()
{
	clear();
	for (int i = 0; i < this->M; i++) {
		for (int j = 0; j < this->N; j++) {
			
			cout << setw(3) << matrix[i][j];
		}
		cout << endl;
	}
	refresh();
	
}



void Matrix::shiftElements(int M, int N)
{
		//przesuwanie, ale to jutro ;p
}

void Matrix::insertPawn(int M, int N) {
	matrix[M][N] = 1;
}
